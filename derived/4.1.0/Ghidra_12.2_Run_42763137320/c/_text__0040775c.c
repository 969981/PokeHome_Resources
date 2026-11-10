/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0040775c; name: FUN_.text__0040775c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0040775c(long *param_1,undefined8 param_2,long param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar1 = (undefined4 *)(param_3 + 0x60);
  if (*(char *)(param_3 + 0x558) != '\0') {
    puVar1 = (undefined4 *)(param_3 + 0x90);
  }
  uVar2 = *puVar1;
  *(undefined2 *)((long)param_1 + 0x32) = 0;
  lVar5 = _DAT_008a49b8;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0x3f800000ffffffff;
  *(undefined8 *)((long)param_1 + 0x44) = 0x1ffffffff;
  *param_1 = lVar5 + 0x10;
  param_1[1] = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  uVar3 = _DAT_008ab03c;
  param_1[4] = 0;
  *(short *)(param_1 + 6) = (short)uVar3;
  *(undefined4 *)(param_1 + 5) = uVar2;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x2b;
  FUN__text__0041ec00();
  param_1[10] = 0;
  *param_1 = 0x8870a8;
  puVar4 = (undefined8 *)FUN__text__004e0478();
  puVar1 = (undefined4 *)(param_3 + 0x60);
  if (*(char *)(param_3 + 0x558) != '\0') {
    puVar1 = (undefined4 *)(param_3 + 0x90);
  }
  lVar5 = (**(code **)*puVar4)(puVar4,param_2,*_DAT_008a4b68,0x10,1,*puVar1);
  param_1[10] = lVar5;
  return;
}


