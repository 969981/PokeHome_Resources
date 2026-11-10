/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003cc2a0; name: FUN_.text__003cc2a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003cc2a0(long *param_1,ulong param_2)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  
  plVar1 = (long *)param_1[1];
  lVar4 = (long)plVar1 - *param_1 >> 4;
  bVar2 = param_2 < (ulong)(lVar4 * -0xf0f0f0f0f0f0f0f);
  lVar4 = param_2 + lVar4 * 0xf0f0f0f0f0f0f0f;
  if (bVar2 || lVar4 == 0) {
    if (bVar2) {
      plVar7 = (long *)(*param_1 + param_2 * 0x110);
      if (plVar1 != plVar7) {
        lVar4 = _DAT_0089f6b8 + 0x10;
        do {
          plVar6 = plVar1 + -0x22;
          *plVar6 = lVar4;
          if (plVar1[-0x21] == 0) {
            plVar1[-0x21] = 0;
            pcVar5 = (code *)plVar1[-0xf];
          }
          else {
            FUN__text__005d9290(plVar1[-0x21],plVar6);
            lVar3 = plVar1[-0x21];
            plVar1[-0x21] = 0;
            if (lVar3 != 0) {
              (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
            }
            pcVar5 = (code *)plVar1[-0xf];
          }
          if (pcVar5 != (code *)0x0) {
            plVar1[-0xe] = 0;
            plVar1[-0xd] = 0;
            plVar1[-0x10] = 0;
            plVar1[-0xf] = 0;
            (*pcVar5)(plVar1 + -0xc);
          }
          pcVar5 = (code *)plVar1[-0x1f];
          if (pcVar5 != (code *)0x0) {
            plVar1[-0x1e] = 0;
            plVar1[-0x1d] = 0;
            plVar1[-0x20] = 0;
            plVar1[-0x1f] = 0;
            (*pcVar5)(plVar1 + -0x1c);
          }
          if (plVar1[-0x21] != 0) {
            (**(code **)(*(long *)(plVar1[-0x21] + 0x48) + 0x18))();
            plVar1[-0x21] = 0;
          }
          plVar1 = plVar6;
        } while (plVar6 != plVar7);
      }
      param_1[1] = (long)plVar7;
    }
    return;
  }
  FUN__text__003cc8c0(param_1,lVar4);
  return;
}


