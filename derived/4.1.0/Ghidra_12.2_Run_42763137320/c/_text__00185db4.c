/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00185db4; name: FUN_.text__00185db4
 */


void FUN__text__00185db4(long param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long local_48;
  
  FUN__text__001156d0(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar2 = *(long *)(local_48 + 0x60);
  if (((lVar2 == 0) || ((**(code **)(*(long *)(lVar2 + 0x48) + 0x10))(), local_48 != 0)) &&
     ((**(code **)(*(long *)(local_48 + 0x48) + 0x18))(), lVar2 == 0)) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  }
  else {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    lVar4 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar2,(ulong)param_2 * 8 + 0x7258a0,lVar4);
  uVar1 = FUN__text__005f3244(lVar4);
  FUN__text__0012c9f0(param_1 + 0x110,0x725898,uVar1,0xb);
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  plVar3 = (long *)(lVar2 + 0x48);
  (**(code **)(*plVar3 + 0x18))(plVar3);
  lVar2 = *(long *)(param_1 + 0x640);
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | param_2 == 0;
  }
  lVar2 = *(long *)(param_1 + 0x648);
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | param_2 == 1;
  }
  lVar2 = *(long *)(param_1 + 0x650);
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | param_2 == 2;
  }
  lVar2 = *(long *)(param_1 + 0x658);
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | param_2 == 3;
  }
  lVar2 = *(long *)(param_1 + 0x660);
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | param_2 == 4;
  }
  lVar2 = *(long *)(param_1 + 0x668);
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | param_2 == 5;
  }
  lVar2 = *(long *)(param_1 + 0x670);
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | param_2 == 6;
  }
  lVar2 = *(long *)(param_1 + 0x678);
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | param_2 == 7;
  }
  lVar2 = *(long *)(param_1 + 0x680);
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | param_2 == 8;
  }
  lVar2 = *(long *)(param_1 + 0x688);
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | param_2 == 9;
  }
  (**(code **)(*plVar3 + 0x18))(plVar3);
  return;
}


