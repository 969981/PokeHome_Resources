/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005c0950; name: FUN_.text__005c0950
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005c0950(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 != param_2) {
    plVar5 = (long *)(lVar4 + -0x6c8);
    lVar1 = _DAT_008a0110 + 0x10;
    do {
      if (*(long *)(lVar4 + -0xb0) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar4 + -0xb0) + 0x48) + 0x18))();
        *(undefined8 *)(lVar4 + -0xb0) = 0;
      }
      if (*(long *)(lVar4 + -0xb8) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar4 + -0xb8) + 0x48) + 0x18))();
        *(undefined8 *)(lVar4 + -0xb8) = 0;
      }
      if (*(long *)(lVar4 + -200) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar4 + -200) + 0x48) + 0x18))();
        *(undefined8 *)(lVar4 + -200) = 0;
      }
      if (*(long *)(lVar4 + -0xd0) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar4 + -0xd0) + 0x48) + 0x18))();
        *(undefined8 *)(lVar4 + -0xd0) = 0;
      }
      lVar6 = *(long *)(lVar4 + -0xe0);
      if (lVar6 != 0) {
        plVar7 = plVar5;
        do {
          if (plVar7[0x2c] != 0) {
            (**(code **)(*(long *)(plVar7[0x2c] + 0x48) + 0x18))();
            plVar7[0x2c] = 0;
          }
          if (plVar7[0x2b] != 0) {
            (**(code **)(*(long *)(plVar7[0x2b] + 0x48) + 0x18))();
            plVar7[0x2b] = 0;
          }
          if (plVar7[0x2a] != 0) {
            (**(code **)(*(long *)(plVar7[0x2a] + 0x48) + 0x18))();
            plVar7[0x2a] = 0;
          }
          if (plVar7[0x29] != 0) {
            (**(code **)(*(long *)(plVar7[0x29] + 0x48) + 0x18))();
            plVar7[0x29] = 0;
          }
          plVar7[0x27] = lVar1;
          if (plVar7[0x28] != 0) {
            (**(code **)(*(long *)(plVar7[0x28] + 0x48) + 0x18))();
            plVar7[0x28] = 0;
          }
          plVar7[5] = 0x8675a8;
          if (plVar7[6] == 0) {
            plVar7[6] = 0;
            pcVar3 = (code *)plVar7[0x18];
          }
          else {
            FUN__text__005d9290();
            lVar2 = plVar7[6];
            plVar7[6] = 0;
            if (lVar2 != 0) {
              (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
            }
            pcVar3 = (code *)plVar7[0x18];
          }
          if (pcVar3 != (code *)0x0) {
            plVar7[0x19] = 0;
            plVar7[0x1a] = 0;
            plVar7[0x17] = 0;
            plVar7[0x18] = 0;
            (*pcVar3)(plVar7 + 0x1b);
          }
          pcVar3 = (code *)plVar7[8];
          if (pcVar3 != (code *)0x0) {
            plVar7[9] = 0;
            plVar7[10] = 0;
            plVar7[7] = 0;
            plVar7[8] = 0;
            (*pcVar3)(plVar7 + 0xb);
          }
          if (plVar7[6] != 0) {
            (**(code **)(*(long *)(plVar7[6] + 0x48) + 0x18))();
            plVar7[6] = 0;
          }
          if (plVar7[4] != 0) {
            (**(code **)(*(long *)(plVar7[4] + 0x48) + 0x18))();
            plVar7[4] = 0;
          }
          if (*plVar7 != 0) {
            (**(code **)(*(long *)(*plVar7 + 0x48) + 0x18))();
            *plVar7 = 0;
          }
          lVar6 = lVar6 + -1;
          plVar7 = plVar7 + 0x40;
        } while (lVar6 != 0);
      }
      lVar4 = lVar4 + -0x6e0;
      plVar5 = plVar5 + -0xdc;
    } while (lVar4 != param_2);
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


