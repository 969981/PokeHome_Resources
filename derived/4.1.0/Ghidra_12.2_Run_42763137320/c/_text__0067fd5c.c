/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067fd5c; name: FUN_.text__0067fd5c
 */


undefined8 FUN__text__0067fd5c(long param_1,uint param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  lVar1 = FUN__text__00680914();
  if (((lVar1 == 0) || ((*(byte *)(lVar1 + 0xe4) >> 1 & 1) != 0)) || (*(int *)(lVar1 + 0xdc) == 5))
  {
    uVar2 = 0xfffffe0b;
    if ((((param_2 & 1) != 0) && (*(char *)(param_1 + 0x9aa) == '\0')) &&
       ((lVar1 = *(long *)(param_1 + 0x138), lVar1 != 0 &&
        ((*(int *)(lVar1 + 8) <= (int)param_2 && (param_2 < *(uint *)(param_1 + 0x930))))))) {
      do {
        if ((int)param_2 <= *(int *)(lVar1 + 8)) {
          if ((int)param_2 < *(int *)(lVar1 + 8)) {
            return 0xfffffe0b;
          }
          puVar3 = (undefined8 *)(lVar1 + 0x70);
          goto LAB__text__0067fde0;
        }
        lVar1 = *(long *)(lVar1 + 0x88);
      } while (lVar1 != 0);
    }
  }
  else {
    puVar3 = (undefined8 *)(lVar1 + 0xa0);
LAB__text__0067fde0:
    uVar2 = 0;
    *puVar3 = param_3;
  }
  return uVar2;
}


