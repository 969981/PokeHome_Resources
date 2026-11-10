/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00458d30; name: FUN_.text__00458d30
 */


void FUN__text__00458d30(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    plVar4 = (long *)*plVar2;
    if (plVar4 == (long *)0x0) {
      iVar1 = (int)plVar2[5] + -1;
      *(int *)(plVar2 + 5) = iVar1;
    }
    else {
      do {
        lVar3 = plVar4[1];
        *(undefined1 *)(lVar3 + 0xde) = 0;
        if (*(long *)(lVar3 + 0x70) != 0) {
          *(undefined4 *)(lVar3 + 0x78) = 0;
          FUN__text__00400fc0(0);
          *(undefined8 *)(lVar3 + 0x70) = 0;
          *(undefined4 *)(lVar3 + 0x7c) = 0;
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
      plVar2 = (long *)*param_1;
      iVar1 = (int)plVar2[5] + -1;
      *(int *)(plVar2 + 5) = iVar1;
    }
    if (iVar1 == 0) {
      thunk_FUN__text__00458490(plVar2);
      FUN__text__00400fc0(0,plVar2);
    }
    *param_1 = 0;
  }
  return;
}


