/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00464290; name: FUN_.text__00464290
 */


void FUN__text__00464290(long param_1,uint param_2)

{
  short sVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined1 local_37;
  
  plVar3 = *(long **)(param_1 + 0x80);
  if (plVar3 == (long *)0x0) {
    lVar4 = *(long *)(param_1 + 0x78);
    if (lVar4 == 0) {
      return;
    }
    lVar2 = *(long *)(lVar4 + 0x70);
    sVar1 = (short)(param_2 >> 0x10);
    if (lVar2 != 0) {
      *(short *)(lVar2 + 0xc6) = *(short *)(lVar2 + 0xc6) - (short)param_2;
      lVar2 = *(long *)(*(long *)(param_1 + 0x78) + 0x70);
      lVar4 = *(long *)(param_1 + 0x78);
      if (lVar2 != 0) {
        *(short *)(lVar2 + 0xc2) = *(short *)(lVar2 + 0xc2) - sVar1;
        lVar4 = *(long *)(param_1 + 0x78);
      }
    }
    while( true ) {
      param_1 = lVar4;
      plVar3 = *(long **)(param_1 + 0x80);
      if (plVar3 != (long *)0x0) break;
      lVar4 = *(long *)(param_1 + 0x78);
      if (lVar4 == 0) {
        return;
      }
      lVar2 = *(long *)(lVar4 + 0x70);
      if (lVar2 != 0) {
        *(short *)(lVar2 + 0xc6) = *(short *)(lVar2 + 0xc6) - (short)param_2;
        lVar2 = *(long *)(*(long *)(param_1 + 0x78) + 0x70);
        lVar4 = *(long *)(param_1 + 0x78);
        if (lVar2 != 0) {
          *(short *)(lVar2 + 0xc2) = *(short *)(lVar2 + 0xc2) - sVar1;
          lVar4 = *(long *)(param_1 + 0x78);
        }
      }
    }
  }
  if (0 < (int)(param_2 * 0x10000)) {
    uVar5 = param_2 & 0xffff;
    if (uVar5 < 2) {
      uVar5 = 1;
    }
    do {
      (**(code **)(*plVar3 + 0x130))(plVar3,1);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  local_40 = 0x100000000;
  uStack_48 = 0;
  local_37 = 1;
  local_60 = 0;
  uStack_58 = 0;
  if (0xffff < (int)param_2) {
    param_2 = param_2 >> 0x10;
    do {
      local_38 = 0;
      local_50 = param_1;
      (**(code **)(*plVar3 + 0x120))(plVar3,&local_60);
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return;
}


