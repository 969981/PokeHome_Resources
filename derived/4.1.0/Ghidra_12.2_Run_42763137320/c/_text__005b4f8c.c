/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b4f8c; name: FUN_.text__005b4f8c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005b4f8c(long param_1,undefined4 param_2,long param_3,int param_4,undefined8 param_5
                        )

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  FUN__text__006ebbe4(&local_50);
  local_50 = CONCAT44(param_2,(int)(param_4 * param_3));
  uVar2 = FUN__text__006ec37c(_DAT_008a0448,&local_50);
  FUN__text__005a5684(&local_70,param_5,0,param_4 * param_3,uVar2);
  *(undefined8 *)(param_1 + 0x48) = local_70;
  if (*(long *)(param_1 + 0x50) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x50) + 0x48) + 0x18))();
  }
  lVar1 = local_68;
  local_70 = 0;
  local_68 = 0;
  *(long *)(param_1 + 0x50) = lVar1;
  *(undefined8 *)(param_1 + 0x58) = local_60;
  *(undefined8 *)(param_1 + 0x60) = local_58;
  local_60 = 0xffffffffffffffff;
  local_58 = 0;
  FUN__text__005b509c(&local_70);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  uVar2 = FUN__text__005b50f0((undefined8 *)(param_1 + 0x48));
  FUN__text__006ec4cc(param_1,_DAT_008a0448,&local_50,uVar2,*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x60));
  *(int *)(param_1 + 0x68) = (int)param_3;
  *(int *)(param_1 + 0x6c) = param_4;
  return;
}


