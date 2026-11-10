/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00215448; name: FUN_.text__00215448
 */


undefined4 * FUN__text__00215448(int param_1,char param_2)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_008e2100;
  if (((((DAT_008e2100 == param_1 && DAT_008e2104 == param_2) ||
        (puVar1 = &DAT_008e2128, DAT_008e2128 == param_1 && DAT_008e212c == param_2)) ||
       ((puVar1 = &DAT_008e2150, DAT_008e2150 == param_1 && (DAT_008e2154 == param_2)))) ||
      ((((puVar1 = &DAT_008e2178, DAT_008e2178 == param_1 && (DAT_008e217c == param_2)) ||
        ((puVar1 = &DAT_008e21a0, DAT_008e21a0 == param_1 && (DAT_008e21a4 == param_2)))) ||
       ((((puVar1 = &DAT_008e21c8, DAT_008e21c8 == param_1 && (DAT_008e21cc == param_2)) ||
         ((puVar1 = &DAT_008e21f0, DAT_008e21f0 == param_1 && (DAT_008e21f4 == param_2)))) ||
        ((puVar1 = &DAT_008e2218, DAT_008e2218 == param_1 && (DAT_008e221c == param_2)))))))) ||
     (((puVar1 = &DAT_008e2240, DAT_008e2240 == param_1 && (DAT_008e2244 == param_2)) ||
      (((puVar1 = &DAT_008e2268, DAT_008e2268 == param_1 && (DAT_008e226c == param_2)) ||
       ((puVar1 = &DAT_008e2290, DAT_008e2290 == param_1 && (DAT_008e2294 == param_2)))))))) {
    return puVar1;
  }
  puVar1 = &DAT_008e22b8;
  if (DAT_008e22bc != param_2 || DAT_008e22b8 != param_1) {
    puVar1 = (undefined4 *)0x0;
  }
  return puVar1;
}


