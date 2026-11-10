/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f65a0; name: FUN_.text__005f65a0
 */


void FUN__text__005f65a0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  size_t __n;
  ulong uVar5;
  byte local_150 [8];
  undefined8 auStack_148 [31];
  
  pbVar4 = local_150;
  lVar3 = *(long *)(param_2 + 0x28);
  uVar5 = 0xcbf29ce484222645;
  __n = lVar3 * 4;
  memcpy(local_150,*(void **)(param_2 + 0x10),__n);
  *param_1 = param_3;
  param_1[1] = param_4;
  *(undefined8 *)(local_150 + __n) = param_3;
  *(undefined8 *)((long)auStack_148 + __n) = param_4;
  if (__n != 0xfffffffffffffff0) {
    lVar3 = lVar3 * -4 + -0x10;
    do {
      bVar2 = *pbVar4;
      lVar3 = lVar3 + 2;
      pbVar1 = pbVar4 + 1;
      pbVar4 = pbVar4 + 2;
      uVar5 = ((uVar5 ^ bVar2) * 0x100000001b3 ^ (ulong)*pbVar1) * 0x100000001b3;
    } while (lVar3 != 0);
  }
  param_1[2] = uVar5;
  return;
}


