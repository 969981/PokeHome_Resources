/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00226c80; name: FUN_.text__00226c80
 */


void FUN__text__00226c80(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_48;
  
  lVar5 = 0;
  lVar1 = 0x7295e0;
  do {
    local_48 = 0xa595632620dd04c7;
    uVar2 = *(undefined8 *)(param_1 + 0x6c8);
    lVar3 = *(long *)(*(long *)(param_1 + 0x6c0) + 0x2e8);
    if (lVar3 == 0) {
      FUN__text__005f2d98(uVar2,&local_48,0);
      lVar3 = *(long *)(*(long *)(param_1 + 0x6c0) + 0x2e0);
    }
    else {
      plVar4 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN__text__005f2d98(uVar2,&local_48,lVar3);
      (**(code **)(*plVar4 + 0x18))(plVar4);
      lVar3 = *(long *)(*(long *)(param_1 + 0x6c0) + 0x2e0);
    }
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    FUN__text__00166508(lVar3,0,*(undefined4 *)(param_1 + 0x6e8 + lVar5),1,0,1);
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    FUN__text__003c8c20(*(undefined8 *)(param_1 + 0x6c0),lVar1,0xb);
    lVar5 = lVar5 + 4;
    lVar1 = lVar1 + 8;
  } while (lVar5 != 0x18);
  return;
}


