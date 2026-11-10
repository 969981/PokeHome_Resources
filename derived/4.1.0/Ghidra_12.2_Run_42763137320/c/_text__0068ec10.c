/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068ec10; name: FUN_.text__0068ec10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0068ec10(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = _DAT_008a6740;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = lVar1 + 0x10;
  param_1[1] = 0;
  FUN__text__00691aa4(param_1 + 6);
  param_1[0xc] = (long)(param_1 + 0xc);
  param_1[0xd] = (long)(param_1 + 0xc);
  param_1[10] = (long)(param_1 + 10);
  param_1[0xb] = (long)(param_1 + 10);
  plVar2 = param_1 + 0x10;
  param_1[0xe] = (long)(param_1 + 0xe);
  param_1[0xf] = (long)(param_1 + 0xe);
  do {
    *plVar2 = (long)plVar2;
    plVar2[1] = (long)plVar2;
    plVar2[3] = (long)(plVar2 + 3);
    plVar2[4] = (long)(plVar2 + 3);
    plVar2[6] = (long)(plVar2 + 6);
    plVar2[7] = (long)(plVar2 + 6);
    plVar2[9] = (long)(plVar2 + 9);
    plVar2[10] = (long)(plVar2 + 9);
    plVar2 = plVar2 + 0xc;
  } while (plVar2 != param_1 + 0x310);
  param_1[0x310] = 0;
  *(undefined4 *)(param_1 + 0x375) = 0;
  *(undefined4 *)((long)param_1 + 0x1bd4) = 1;
  *(undefined1 *)(param_1 + 0x38a) = 1;
  *(undefined4 *)((long)param_1 + 0x1bcc) = 0;
  *(undefined2 *)(param_1 + 0x37a) = 0;
  param_1[0x37b] = 0;
  param_1[0x37c] = 0;
  param_1[0x37d] = 0;
  param_1[0x37e] = 0;
  param_1[0x37f] = 0;
  param_1[0x380] = 0;
  param_1[0x381] = 0;
  param_1[0x382] = 0;
  param_1[899] = 0;
  param_1[900] = 0;
  param_1[0x385] = 0;
  param_1[0x386] = 0;
  param_1[0x387] = 0;
  param_1[0x388] = 0;
  param_1[0x389] = 0;
  FUN__text__006f5904(param_1 + 0x38b);
  FUN__text__006f5a6c(param_1 + 0x3a6);
  FUN__text__006ee670(param_1 + 0x3af);
  param_1[0x3d4] = 0;
  param_1[0x3d3] = 0;
  param_1[0x3d9] = -1;
  param_1[0x3d5] = 0x89c6f0;
  FUN__text__0068d4cc(param_1 + 0x3d5,0,0xc,0,0,0,1);
  lVar1 = _DAT_008a6748;
  param_1[0x3d9] = -1;
  *(undefined1 *)((long)param_1 + 0x1ec1) = 0;
  param_1[0x3d5] = lVar1 + 0x10;
  memset(param_1 + 0x311,0,800);
  return;
}


