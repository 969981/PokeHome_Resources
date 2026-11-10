/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00320b30; name: FUN_.text__00320b30
 */


void FUN__text__00320b30(undefined8 *param_1,undefined1 param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = FUN__text__00304b90();
  lVar4 = lVar4 + (ulong)param_3 * 0x24;
  *(undefined8 *)(&DAT_0093f332 + lVar4) = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar5 = param_1[3];
  uVar3 = *(undefined2 *)(param_1 + 4);
  (&DAT_0093f331)[lVar4] = param_2;
  *(undefined8 *)(&DAT_0093f33a + lVar4) = uVar1;
  *(undefined2 *)(&DAT_0093f352 + lVar4) = uVar3;
  *(undefined8 *)(&DAT_0093f34a + lVar4) = uVar5;
  *(undefined8 *)(&DAT_0093f342 + lVar4) = uVar2;
  (&DAT_0093f330)[lVar4] = 1;
  return;
}


