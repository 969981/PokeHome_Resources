/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c8740; name: FUN_.text__001c8740
 */


int FUN__text__001c8740(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  byte *pbVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  byte local_268 [520];
  
  memset(local_268,0,0x200);
  lVar8 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0x4a92c4bb8a15ba68;
  pbVar9 = (byte *)((ulong)local_268 | 1);
  do {
    uVar7 = lVar8 * 6;
    snprintf((char *)local_268,0x200,(char *)0x714527,uVar7 & 0xffffffff);
    uVar3 = 0xcbf29ce484222645;
    pbVar4 = pbVar9;
    bVar1 = local_268[0];
    while (bVar1 != 0) {
      uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    }
    *(ulong *)(param_1 + lVar8 * 0x18 + 0x28) = uVar3;
    snprintf((char *)local_268,0x200,(char *)0x710438,uVar7 & 0xffffffff);
    uVar3 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar3 = 0xcbf29ce484222645;
      pbVar4 = pbVar9;
      bVar1 = local_268[0];
      do {
        uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
    }
    lVar5 = param_1 + lVar8 * 0x18;
    uVar6 = (uint)uVar7;
    *(ulong *)(lVar5 + 0x30) = uVar3;
    snprintf((char *)local_268,0x200,(char *)0x714527,(ulong)(uVar6 | 1));
    uVar3 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar3 = 0xcbf29ce484222645;
      pbVar4 = pbVar9;
      bVar1 = local_268[0];
      do {
        uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
    }
    *(ulong *)(lVar5 + 0xa0) = uVar3;
    snprintf((char *)local_268,0x200,(char *)0x710438,(ulong)(uVar6 | 1));
    uVar3 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar3 = 0xcbf29ce484222645;
      pbVar4 = pbVar9;
      bVar1 = local_268[0];
      do {
        uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
    }
    lVar5 = param_1 + lVar8 * 0x18;
    *(ulong *)(lVar5 + 0xa8) = uVar3;
    snprintf((char *)local_268,0x200,(char *)0x714527,(ulong)(uVar6 + 2));
    uVar3 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar3 = 0xcbf29ce484222645;
      pbVar4 = pbVar9;
      bVar1 = local_268[0];
      do {
        uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
    }
    *(ulong *)(lVar5 + 0x118) = uVar3;
    snprintf((char *)local_268,0x200,(char *)0x710438,(ulong)(uVar6 + 2));
    uVar3 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar3 = 0xcbf29ce484222645;
      pbVar4 = pbVar9;
      bVar1 = local_268[0];
      do {
        uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
    }
    lVar5 = param_1 + lVar8 * 0x18;
    *(ulong *)(lVar5 + 0x120) = uVar3;
    snprintf((char *)local_268,0x200,(char *)0x714527,(ulong)(uVar6 + 3));
    uVar3 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar3 = 0xcbf29ce484222645;
      pbVar4 = pbVar9;
      bVar1 = local_268[0];
      do {
        uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
    }
    *(ulong *)(lVar5 + 400) = uVar3;
    snprintf((char *)local_268,0x200,(char *)0x710438,(ulong)(uVar6 + 3));
    uVar3 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar3 = 0xcbf29ce484222645;
      pbVar4 = pbVar9;
      bVar1 = local_268[0];
      do {
        uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
    }
    lVar5 = param_1 + lVar8 * 0x18;
    *(ulong *)(lVar5 + 0x198) = uVar3;
    snprintf((char *)local_268,0x200,(char *)0x714527,(ulong)(uVar6 + 4));
    uVar3 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar3 = 0xcbf29ce484222645;
      pbVar4 = pbVar9;
      bVar1 = local_268[0];
      do {
        uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
    }
    *(ulong *)(lVar5 + 0x208) = uVar3;
    snprintf((char *)local_268,0x200,(char *)0x710438,(ulong)(uVar6 + 4));
    uVar3 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar3 = 0xcbf29ce484222645;
      pbVar4 = pbVar9;
      bVar1 = local_268[0];
      do {
        uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
    }
    lVar5 = param_1 + lVar8 * 0x18;
    *(ulong *)(lVar5 + 0x210) = uVar3;
    snprintf((char *)local_268,0x200,(char *)0x714527,(ulong)(uVar6 + 5));
    uVar3 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar3 = 0xcbf29ce484222645;
      pbVar4 = pbVar9;
      bVar1 = local_268[0];
      do {
        uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
    }
    *(ulong *)(lVar5 + 0x280) = uVar3;
    iVar2 = snprintf((char *)local_268,0x200,(char *)0x710438,(ulong)(uVar6 + 5));
    uVar3 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar3 = 0xcbf29ce484222645;
      pbVar4 = pbVar9;
      bVar1 = local_268[0];
      do {
        uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
    }
    lVar5 = lVar8 * 0x18;
    lVar8 = lVar8 + 1;
    *(ulong *)(param_1 + lVar5 + 0x288) = uVar3;
  } while (lVar8 != 5);
  return iVar2;
}


