/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005fae20; name: FUN_.text__005fae20
 */


void FUN__text__005fae20(undefined8 *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  size_t sVar3;
  ulong uVar4;
  byte *pbVar5;
  char *__s;
  ulong uVar6;
  long lVar7;
  
  param_1[4] = 0;
  uVar6 = 0xcbf29ce484222645;
  *param_1 = param_2;
  param_1[1] = 0xcbf29ce484222645;
  param_1[2] = 0x70f683;
  param_1[3] = 0;
  lVar7 = 0;
  if (4 < *(ushort *)((long)param_2 - (long)*param_2)) {
    uVar4 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2];
    if (uVar4 == 0) {
      lVar7 = 0;
      __s = (char *)0x4;
      sVar3 = strlen((char *)0x4);
      bVar2 = bRam0000000000000004;
      goto joined_r0x005fae94;
    }
    puVar1 = (uint *)((long)param_2 + uVar4);
    lVar7 = (long)puVar1 + (ulong)*puVar1;
  }
  __s = (char *)(lVar7 + 4);
  sVar3 = strlen(__s);
  bVar2 = *(byte *)(lVar7 + 4);
joined_r0x005fae94:
  if (bVar2 != 0) {
    pbVar5 = (byte *)(lVar7 + 5);
    do {
      uVar6 = (uVar6 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar2 != 0);
  }
  param_1[1] = uVar6;
  param_1[2] = __s;
  param_1[3] = sVar3;
  param_1[4] = 0;
  return;
}


