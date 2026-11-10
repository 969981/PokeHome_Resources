/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c1830; name: FUN_.text__006c1830
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__006c1830(undefined8 param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  plVar1 = _DAT_008a5970;
  if (*(long *)(param_2 + *_DAT_008a5970) != 0) {
    pcVar3 = *(char **)(*(long *)(param_2 + *_DAT_008a5970) + 0x68);
    if (*pcVar3 == '\0') {
      uVar4 = FUN__text__006f32b0(pcVar3,param_1);
      if ((int)uVar4 != 0) goto LAB__text__006c1888;
    }
    else {
      uVar4 = 0;
    }
    return uVar4;
  }
LAB__text__006c1888:
  lVar5 = *(long *)(param_2 + plVar1[1]);
  if (lVar5 != 0) {
    pcVar3 = *(char **)(lVar5 + 0x68);
    if ((*pcVar3 != '\0') || (iVar2 = FUN__text__006f32b0(pcVar3,param_1), iVar2 == 0)) {
      return 1;
    }
  }
  lVar5 = *(long *)(param_2 + plVar1[2]);
  if (lVar5 == 0) {
    pcVar3 = _DAT_00000068;
  }
  else {
    pcVar3 = *(char **)(lVar5 + 0x68);
    if (*pcVar3 != '\0') {
      return 2;
    }
  }
  FUN__text__006f32b0(pcVar3,param_1);
  return 2;
}


