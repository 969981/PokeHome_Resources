/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0023bef8; name: FUN_.text__0023bef8
 */


void FUN__text__0023bef8(long param_1,int param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long local_48;
  
  FUN__text__003c7c60(param_3,(long)param_2 * 0x18 + 0x72b920,1);
  lVar2 = *param_4;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar2,0x72b9e0,lVar3);
  uVar1 = FUN__text__005f3244(lVar3);
  FUN__text__0012c9f0(param_1 + 0x110,(long)param_2 * 0x18 + 0x72b928,uVar1,0xb);
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  lVar2 = *(long *)(param_1 + 0x650);
  uVar1 = *(undefined8 *)(param_1 + 0x648);
  local_48 = *param_4;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  FUN__text__0022ece4(uVar1,param_3,&local_48,*(undefined8 *)((long)param_2 * 0x18 + 0x72b930),
                      0xeae77ecb393e04b8,9,*(undefined4 *)(lVar2 + 0x1c),0);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


