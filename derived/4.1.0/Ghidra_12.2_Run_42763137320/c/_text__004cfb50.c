/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cfb50; name: FUN_.text__004cfb50
 */


byte * FUN__text__004cfb50(undefined4 param_1,long param_2,uint param_3)

{
  long lVar1;
  byte bVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  uint uVar7;
  size_t __n;
  
  if (*(long *)(param_2 + 8) != 0) {
    pbVar4 = *(byte **)(param_2 + 0x18);
    if (pbVar4 != (byte *)0x0) {
      bVar2 = *pbVar4;
      uVar7 = (uint)bVar2;
      if (bVar2 < 2) {
        uVar7 = 1;
      }
      uVar6 = (ulong)uVar7;
      pbVar5 = pbVar4 + ((ulong)bVar2 & 0xf8) + 8;
      do {
        pbVar4 = pbVar4 + 1;
        if ((uint)*pbVar4 == (param_3 & 0xff)) {
          return pbVar5;
        }
        pbVar5 = pbVar5 + 0x10;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    uVar6 = FUN__text__00466c24(*(long *)(param_2 + 8),
                                *(undefined4 *)((ulong)param_3 * 4 + 0x73b2b0));
    if ((uVar6 & 1) != 0) {
      if (*(byte **)(param_2 + 0x18) == (byte *)0x0) {
        __n = 0;
      }
      else {
        __n = (size_t)**(byte **)(param_2 + 0x18);
      }
      lVar1 = __n + 1;
      uVar7 = ((uint)lVar1 & 0x1f8) + 8;
      puVar3 = (undefined1 *)FUN__text__00400f80(0,uVar7 + (uint)lVar1 * 0x10);
      if (puVar3 != (undefined1 *)0x0) {
        if (*(long *)(param_2 + 0x18) != 0) {
          memcpy(puVar3 + 1,(void *)(*(long *)(param_2 + 0x18) + 1),__n);
          memcpy(puVar3 + uVar7,
                 (void *)(*(long *)(param_2 + 0x18) + (ulong)(((uint)__n & 0xf8) + 8)),__n << 4);
          FUN__text__00400fc0(0,*(undefined8 *)(param_2 + 0x18));
        }
        puVar3[lVar1] = (char)param_3;
        pbVar4 = puVar3 + __n * 0x10 + (ulong)uVar7;
        *puVar3 = (char)lVar1;
        *(undefined1 **)(param_2 + 0x18) = puVar3;
        *(undefined4 *)pbVar4 = param_1;
        pbVar4[8] = 0;
        pbVar4[9] = 0;
        pbVar4[10] = 0;
        pbVar4[0xb] = 0;
        pbVar4[0xc] = 0;
        pbVar4[0xd] = 0;
        pbVar4[0xe] = 0;
        pbVar4[0xf] = 0;
        return pbVar4;
      }
    }
  }
  return (byte *)0x0;
}


