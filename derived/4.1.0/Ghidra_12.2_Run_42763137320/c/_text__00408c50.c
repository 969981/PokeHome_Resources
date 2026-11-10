/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00408c50; name: FUN_.text__00408c50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00408c50(long *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = _DAT_008a49d0;
  if (*_DAT_008a4598 != '\0') {
LAB__text__00408c74:
    uVar3 = FUN__text__00406cc0(*param_1,1);
    return uVar3;
  }
  while( true ) {
    iVar2 = FUN__text__00407f70(*param_1);
    if (0x33 < iVar2) break;
    if ((iVar2 != 4) && (iVar2 != 0xf)) {
      if (iVar2 == 1) {
        return 1;
      }
      goto LAB__text__00408d80;
    }
LAB__text__00408cd4:
    for (lVar4 = *(long *)(lVar1 + 0x10); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x20)) {
      if (*(int *)(lVar4 + 100) == -0x19eeceb6) {
        *param_1 = lVar4;
        return 3;
      }
    }
    lVar4 = *param_1;
    if (*(int *)(lVar4 + 100) == -0x19eeceb6) goto LAB__text__00408d84;
    FUN__text__00461fb0(*(int *)(lVar4 + 100),0xe611314a);
    *(undefined4 *)(*param_1 + 100) = 0xe611314a;
    FUN__text__00408da0(*param_1 + 100,*param_1 + 0x68);
    *(undefined8 *)(*param_1 + 0x28) = *(undefined8 *)(*param_1 + 100);
    if (iVar2 == 1) {
      return 1;
    }
  }
  if (iVar2 < 0x5a) {
    if (iVar2 == 0x58) goto LAB__text__00408cd4;
    if (iVar2 == 0x34) {
      return 0x34;
    }
  }
  else if (iVar2 == 0x5a) goto LAB__text__00408c74;
LAB__text__00408d80:
  lVar4 = *param_1;
LAB__text__00408d84:
  uVar3 = FUN__text__00406cc0(lVar4,0);
  return uVar3;
}


