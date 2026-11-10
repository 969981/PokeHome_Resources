/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d5528; name: FUN_.text__005d5528
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005d5528(long *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_34;
  
  FUN__text__005d55f4();
  local_34 = 0;
  lVar1 = _DAT_008a5998 + 0x40;
  *param_1 = _DAT_008a5998 + 0x10;
  param_1[9] = lVar1;
  piVar4 = _DAT_008a59a0;
  if (0 < param_2) {
    *_DAT_008a59a0 = param_2;
  }
  puVar3 = _DAT_008a5698;
  puVar2 = _DAT_008a0448;
  (*(code *)*_DAT_008a5698)(*_DAT_008a0448,0x11,&local_34);
  (*(code *)*puVar3)(*puVar2,0x24,&local_58);
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN__text__006ebbfc(&local_58);
  local_58 = CONCAT71(local_58._1_7_,1);
  local_58 = CONCAT44(*piVar4,(undefined4)local_58);
  FUN__text__005d5724(param_1,&local_58,local_34);
  return;
}


