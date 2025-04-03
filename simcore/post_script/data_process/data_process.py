#!/usr/bin/env python3
# -*- coding: utf-8 -*-

from dataclasses import dataclass

from xlsxwriter import Workbook, Format


@dataclass(order=True)
class DataProcess(object):
    def __post_init__(self) -> None:
        pass

    def process_data(self, event: dict) -> None:
        """
        Define a method that handles the data, receiving an event as a parameter.

        Args:
            event (dict): event = {"channel": "", "pb_msg_str": "", "timestamp": 0}

        Returns:
            None
        """

        pass

    def get_dict_data(self) -> dict:
        """
        Get and return dictionary data

        Returns:
            Dict
        """

        pass

    def write_data_to_xlsx(self, workbook: Workbook, style: Format) -> None:
        """
        Write data to an Excel file

        Args:
            workbook (Workbook): Representing the Excel
            style (Format): Representing the format to be applied to the written data.

        Returns:
            None
        """

        pass

    def is_valid_value(self, value_in: float) -> bool:
        """
        Determine if the input parameter is the maximum value of type int.

        Args:
            value_in (float): value of input.

        Returns:
            bool

        """
        return value_in < 2147483640
