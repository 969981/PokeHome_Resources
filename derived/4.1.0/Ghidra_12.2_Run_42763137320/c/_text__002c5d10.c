/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c5d10; name: FUN_.text__002c5d10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002c5d10(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 *puVar3;
  long lVar4;
  
  lVar1 = _DAT_008a2570;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  lVar4 = 0x38a;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = lVar1 + 0x10;
  param_1[6] = 0;
  param_1[7] = 0;
  lVar1 = _DAT_0089f6e0 + 0x10;
  param_1[0x24] = 0;
  param_1[2] = lVar1;
  param_1[3] = 0;
  plVar2 = param_1 + 0x25;
  puVar3 = (undefined4 *)((long)param_1 + 0x144);
  do {
    *(undefined2 *)(puVar3 + -7) = 0;
    lVar4 = lVar4 + -2;
    *(undefined2 *)((long)puVar3 + -0x12) = 0;
    puVar3[-4] = 0;
    *(undefined2 *)(puVar3 + -3) = 0;
    *(undefined2 *)((long)puVar3 + -2) = 0;
    *puVar3 = 0;
    puVar3 = puVar3 + 8;
  } while (lVar4 != 0);
  do {
    *(undefined2 *)plVar2 = 0;
    *(undefined8 *)((long)plVar2 + 2) = 0xffffffffffff0;
    *(undefined2 *)((long)plVar2 + 10) = 0;
    *(undefined4 *)((long)plVar2 + 0xc) = 0;
    *(undefined2 *)(plVar2 + 2) = 0;
    *(undefined8 *)((long)plVar2 + 0x12) = 0xffffffffffff0;
    *(undefined2 *)((long)plVar2 + 0x1a) = 0;
    *(undefined4 *)((long)plVar2 + 0x1c) = 0;
    *(undefined2 *)(plVar2 + 4) = 0;
    *(undefined8 *)((long)plVar2 + 0x22) = 0xffffffffffff0;
    *(undefined2 *)((long)plVar2 + 0x2a) = 0;
    *(undefined4 *)((long)plVar2 + 0x2c) = 0;
    plVar2 = plVar2 + 6;
  } while (plVar2 != param_1 + 0x739);
  return;
}


