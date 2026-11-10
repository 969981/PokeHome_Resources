/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002889d0; name: FUN_.text__002889d0
 */


void FUN__text__002889d0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  long local_18;
  
  local_50 = 0xa7649e0ad180b01a;
  uStack_48 = 0x71a942;
  local_40 = 0x1b;
  local_38 = 0;
  FUN__text__00115650(&local_18,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),&local_50,0xb);
  lVar4 = *(long *)(local_18 + 0x60);
  if ((lVar4 == 0) || ((**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(), local_18 != 0)) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
    local_18 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  iVar1 = FUN__text__0015ab30();
  if ((iVar1 - 2U < 5) || (iVar1 == 10)) {
    local_50 = 0x8fcf7ecbbf61a015;
    lVar2 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x730b38);
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
    lVar2 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x730b40);
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 1;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    local_18 = -0x4a78912fb0b4e2cf;
    lVar2 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  }
  else {
    local_50 = 0x8fcf7dcbbf619e62;
    lVar2 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x730b38);
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 1;
    lVar2 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x730b40);
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    local_18 = -0x9427263b61f4c37;
    lVar2 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,&local_18,lVar2);
  uVar3 = FUN__text__005f3244(lVar2);
  FUN__text__0012c9f0(param_1 + 0x110,&local_50,uVar3,0xb);
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  plVar5 = (long *)(lVar4 + 0x48);
  (**(code **)(*plVar5 + 0x18))(plVar5);
  (**(code **)(*plVar5 + 0x18))(plVar5);
  return;
}


