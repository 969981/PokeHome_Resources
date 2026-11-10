/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00407430; name: FUN_.text__00407430
 */


void FUN__text__00407430(long param_1,undefined8 *param_2,undefined8 param_3,int *param_4,
                        undefined4 *param_5)

{
  int iVar1;
  long lVar2;
  undefined8 local_70;
  undefined8 local_68;
  uint local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  
  local_70 = 0;
  local_68 = 0x2b00000000;
  local_54 = 0x3f800000ffffffff;
  local_60 = 0;
  local_5c = 0;
  local_4c = 0x1ffffffff;
  if ((*(char *)(param_1 + 0x9c) != '\0') || (*param_4 != 0)) {
    local_60 = (uint)*(ushort *)((long)param_2 + 0x12);
    local_68 = CONCAT44(0x2b,*(undefined4 *)((long)param_2 + 8));
    iVar1 = FUN__text__0041ec00(&local_70);
    if (iVar1 == 1) {
      FUN__text__00407280(param_1,param_2,param_3,param_4,&local_70);
      param_2 = &local_70;
    }
  }
  for (lVar2 = *(long *)(param_1 + 0x88); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    FUN__text__00407510(*param_5,param_5[1],lVar2,param_2);
  }
  FUN__text__0041edb0(&local_70);
  return;
}


