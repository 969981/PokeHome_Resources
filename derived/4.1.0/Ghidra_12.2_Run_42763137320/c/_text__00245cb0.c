/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00245cb0; name: FUN_.text__00245cb0
 */


void FUN__text__00245cb0(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 local_28;
  
  iVar4 = *(int *)(param_2 + 0x2c);
  if (iVar4 != 0) {
    lVar5 = *(long *)(param_1 + 0x6d0);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      iVar4 = *(int *)(param_2 + 0x2c);
    }
    local_28 = *(undefined8 *)((long)iVar4 * 8 + 0x72bc20);
    lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    FUN__text__005f2d98(lVar5,&local_28,lVar6);
    uVar3 = FUN__text__005f3244(lVar6);
    FUN__text__0012c9f0(param_1 + 0x110,0x72bd38,uVar3,0xb);
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    uVar3 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),0x72bd40);
    if (((*(int *)(param_1 + 0x6e8) == 2) && (uVar1 = *(byte *)(param_2 + 0x49) - 1, uVar1 < 7)) &&
       ((0x5fU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
      lVar5 = *(long *)(param_1 + *(long *)((long)(char)uVar1 * 8 + 0x72bd48) * 8 + 0xa10);
    }
    else {
      lVar5 = *(long *)(param_1 + 0x578);
    }
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    uVar2 = FUN__text__003cde90(*(undefined4 *)(param_2 + 0x2c));
    FUN__text__003cdea0(lVar5,uVar2,uVar3,0,0);
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return;
}


