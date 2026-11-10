/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cfe18; name: FUN_.text__004cfe18
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004cfe18(undefined4 param_1,long param_2,ulong param_3,ulong param_4)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  undefined4 local_4c;
  undefined2 local_48;
  undefined4 local_44;
  
  fVar2 = (float)FUN__text__0045ded0(*(undefined8 *)(param_2 + 8));
  *(undefined4 *)(param_2 + 0x18) = param_1;
  fVar3 = (float)FUN__text__0045ded0(*(undefined8 *)(param_2 + 8),param_3 & 0xffffffff);
  if ((param_4 & 1) != 0) {
    if (*(char *)(param_2 + 0x1c) != '\0') {
      *(undefined4 *)(param_2 + 0x18) = 0;
    }
    FUN__text__0045fc80(*(undefined8 *)(param_2 + 8));
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined1 *)(param_2 + 0x1c) = 0;
  }
  if (fVar3 - fVar2 != 0.0) {
    plVar1 = *(long **)(param_2 + 8);
    local_4c = (undefined4)plVar1[4];
    local_48 = 5;
    local_44 = 0;
    (**(code **)(*plVar1 + 0x240))
              (fVar3,fVar3 - fVar2,plVar1,*(undefined4 *)(_DAT_008a4ac8 + param_3 * 4),&local_4c);
  }
  return;
}


