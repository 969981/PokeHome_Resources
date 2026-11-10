/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00244800; name: FUN_.text__00244800
 */


void FUN__text__00244800(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar3 = *(long *)(param_1 + 0x598);
  local_50 = 0x2afb4647d629741e;
  uStack_48 = 0x715d3e;
  local_40 = 0x18;
  local_38 = 0;
  uVar1 = FUN__text__00137c10(*(undefined8 *)(param_1 + 0x60),&local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  uVar2 = FUN__text__00139b48(uVar1,5,0);
  FUN__text__003cf230(lVar3 + 0x20068,*(undefined8 *)(param_1 + 8),uVar2,0);
  uVar2 = FUN__text__00139b48(uVar1,5,1);
  FUN__text__003cf230(lVar3 + 0x400d0,*(undefined8 *)(param_1 + 8),uVar2,0);
  uVar2 = FUN__text__00139b48(uVar1,5,2);
  FUN__text__003cf230(lVar3 + 0x60138,*(undefined8 *)(param_1 + 8),uVar2,0);
  uVar2 = FUN__text__00139b48(uVar1,5,3);
  FUN__text__003cf230(lVar3 + 0x801a0,*(undefined8 *)(param_1 + 8),uVar2,0);
  uVar2 = FUN__text__00139b48(uVar1,5,4);
  FUN__text__003cf230(lVar3 + 0xa0208,*(undefined8 *)(param_1 + 8),uVar2,0);
  uVar2 = FUN__text__00139b48(uVar1,5,5);
  FUN__text__003cf230(lVar3 + 0xc0270,*(undefined8 *)(param_1 + 8),uVar2,0);
  uVar2 = FUN__text__00139b48(uVar1,5,6);
  FUN__text__003cf230(lVar3 + 0xe02d8,*(undefined8 *)(param_1 + 8),uVar2,0);
  uVar1 = FUN__text__00139b48(uVar1,5,7);
  FUN__text__003cf230(__nnDetailNintendoSdkRuntimeObjectFile + lVar3,*(undefined8 *)(param_1 + 8),
                      uVar1,0);
  return;
}


