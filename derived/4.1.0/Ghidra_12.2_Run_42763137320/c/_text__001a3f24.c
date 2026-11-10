/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a3f24; name: FUN_.text__001a3f24
 */


void FUN__text__001a3f24(undefined1 param_1 [16],undefined4 param_2,long param_3,undefined4 *param_4
                        )

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_18;
  undefined4 uStack_14;
  
  lVar1 = *(long *)(*(long *)(param_3 + 8) + 0x2d0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  local_18 = FUN__text__003c7a60(lVar1,param_3 + 0x80);
  uVar2 = param_4[1];
  uStack_14 = param_2;
  local_38 = FUN__text__0019693c(*param_4,&local_18);
  uStack_34 = uVar2;
  FUN__text__003c7960(lVar1,param_3 + 0x88,&local_38);
  local_18 = FUN__text__003c7a60(lVar1,param_3 + 0x180);
  uVar3 = param_4[1];
  uStack_14 = uVar2;
  local_38 = FUN__text__0019693c(*param_4,&local_18);
  uStack_34 = uVar3;
  FUN__text__003c7960(lVar1,param_3 + 0x188,&local_38);
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


