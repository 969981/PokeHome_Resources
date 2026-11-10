/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003dd7f0; name: FUN_.text__003dd7f0
 */


void FUN__text__003dd7f0(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  long *plVar6;
  
  if (*param_1 != 0) {
    lVar4 = param_1[1];
    if ((lVar4 != param_1[2]) && (uVar3 = FUN__text__003d6a10(), (uVar3 & 1) != 0)) {
      plVar6 = (long *)*param_1;
      lVar4 = (lVar4 - (long)param_1) + -0x18;
      if (lVar4 < 0) {
        if (*(int *)((long)plVar6 + 0x3c) == 0) {
          *(undefined4 *)((long)plVar6 + 0x3c) = 0x16;
        }
      }
      else {
        puVar5 = (ulong *)(plVar6 + 2);
        uVar1 = *puVar5;
        uVar2 = plVar6[3];
        uVar3 = uVar1 + lVar4;
        if (uVar2 < uVar3) {
          *puVar5 = 0;
          plVar6[3] = 0;
          plVar6[1] = plVar6[1] + uVar2;
          lVar4 = (**(code **)(*plVar6 + 0x20))(plVar6,(lVar4 - uVar2) + uVar1);
          plVar6[1] = plVar6[1] + lVar4;
        }
        else {
          *puVar5 = uVar3;
        }
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


