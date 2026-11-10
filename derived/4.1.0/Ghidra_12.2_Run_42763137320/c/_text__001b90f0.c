/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001b90f0; name: FUN_.text__001b90f0
 */


void FUN__text__001b90f0(undefined1 param_1 [16],undefined4 param_2,long param_3,ulong *param_4,
                        undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  byte *pbVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined4 uVar7;
  byte local_260 [512];
  
  lVar4 = *(long *)(*(long *)(param_3 + 8) + 0x2d0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  uVar6 = 0xcbf29ce484222645;
  memset(local_260,0,0x200);
  snprintf((char *)local_260,0x200,(char *)0x7103ff,param_6);
  uVar3 = 0xcbf29ce484222645;
  if (local_260[0] != 0) {
    uVar3 = 0xcbf29ce484222645;
    pbVar2 = (byte *)((ulong)local_260 | 1);
    bVar1 = local_260[0];
    do {
      uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  *param_4 = uVar3;
  snprintf((char *)local_260,0x200,(char *)0x7103ff,param_5);
  uVar3 = 0xcbf29ce484222645;
  if (local_260[0] != 0) {
    uVar3 = 0xcbf29ce484222645;
    pbVar2 = (byte *)((ulong)local_260 | 1);
    bVar1 = local_260[0];
    do {
      uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  param_4[1] = uVar3;
  snprintf((char *)local_260,0x200,(char *)0x70b78d,param_5);
  uVar3 = 0xcbf29ce484222645;
  if (local_260[0] != 0) {
    uVar3 = 0xcbf29ce484222645;
    pbVar2 = (byte *)((ulong)local_260 | 1);
    bVar1 = local_260[0];
    do {
      uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  param_4[2] = uVar3;
  snprintf((char *)local_260,0x200,(char *)0x710407,param_5);
  uVar3 = 0xcbf29ce484222645;
  if (local_260[0] != 0) {
    uVar3 = 0xcbf29ce484222645;
    pbVar2 = (byte *)((ulong)local_260 | 1);
    bVar1 = local_260[0];
    do {
      uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  param_4[3] = uVar3;
  snprintf((char *)local_260,0x200,(char *)0x72000f,param_5);
  uVar3 = 0xcbf29ce484222645;
  if (local_260[0] != 0) {
    uVar3 = 0xcbf29ce484222645;
    pbVar2 = (byte *)((ulong)local_260 | 1);
    bVar1 = local_260[0];
    do {
      uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  param_4[4] = uVar3;
  snprintf((char *)local_260,0x200,(char *)0x720cbb,param_5);
  uVar3 = 0xcbf29ce484222645;
  if (local_260[0] != 0) {
    uVar3 = 0xcbf29ce484222645;
    pbVar2 = (byte *)((ulong)local_260 | 1);
    bVar1 = local_260[0];
    do {
      uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  param_4[5] = uVar3;
  snprintf((char *)local_260,0x200,(char *)0x71b6cc,param_5);
  uVar3 = 0xcbf29ce484222645;
  if (local_260[0] != 0) {
    uVar3 = 0xcbf29ce484222645;
    pbVar2 = (byte *)((ulong)local_260 | 1);
    bVar1 = local_260[0];
    do {
      uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  param_4[6] = uVar3;
  snprintf((char *)local_260,0x200,(char *)0x70da48,param_5);
  uVar3 = 0xcbf29ce484222645;
  if (local_260[0] != 0) {
    uVar3 = 0xcbf29ce484222645;
    pbVar2 = (byte *)((ulong)local_260 | 1);
    bVar1 = local_260[0];
    do {
      uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  param_4[7] = uVar3;
  snprintf((char *)local_260,0x200,(char *)0x714ece,param_5);
  uVar3 = 0xcbf29ce484222645;
  if (local_260[0] != 0) {
    uVar3 = 0xcbf29ce484222645;
    pbVar2 = (byte *)((ulong)local_260 | 1);
    bVar1 = local_260[0];
    do {
      uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  param_4[8] = uVar3;
  snprintf((char *)local_260,0x200,(char *)0x70b7a4,param_5);
  uVar3 = 0xcbf29ce484222645;
  if (local_260[0] != 0) {
    uVar3 = 0xcbf29ce484222645;
    pbVar2 = (byte *)((ulong)local_260 | 1);
    bVar1 = local_260[0];
    do {
      uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  param_4[9] = uVar3;
  snprintf((char *)local_260,0x200,(char *)0x71ccea,param_5);
  uVar3 = 0xcbf29ce484222645;
  if (local_260[0] != 0) {
    uVar3 = 0xcbf29ce484222645;
    pbVar2 = (byte *)((ulong)local_260 | 1);
    bVar1 = local_260[0];
    do {
      uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  param_4[10] = uVar3;
  snprintf((char *)local_260,0x200,(char *)0x70f869,param_5);
  uVar3 = 0xcbf29ce484222645;
  if (local_260[0] != 0) {
    uVar3 = 0xcbf29ce484222645;
    pbVar2 = (byte *)((ulong)local_260 | 1);
    bVar1 = local_260[0];
    do {
      uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  param_4[0xb] = uVar3;
  snprintf((char *)local_260,0x200,(char *)0x70e2da,param_5);
  uVar3 = 0xcbf29ce484222645;
  if (local_260[0] != 0) {
    uVar3 = 0xcbf29ce484222645;
    pbVar2 = (byte *)((ulong)local_260 | 1);
    bVar1 = local_260[0];
    do {
      uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  param_4[0xe] = uVar3;
  snprintf((char *)local_260,0x200,&DAT_0070da65,param_5);
  uVar3 = 0xcbf29ce484222645;
  if (local_260[0] != 0) {
    uVar3 = 0xcbf29ce484222645;
    pbVar2 = (byte *)((ulong)local_260 | 1);
    bVar1 = local_260[0];
    do {
      uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  param_4[0xc] = uVar3;
  snprintf((char *)local_260,0x200,(char *)0x718731,param_5);
  uVar3 = 0xcbf29ce484222645;
  if (local_260[0] != 0) {
    uVar3 = 0xcbf29ce484222645;
    pbVar2 = (byte *)((ulong)local_260 | 1);
    bVar1 = local_260[0];
    do {
      uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  param_4[0xd] = uVar3;
  snprintf((char *)local_260,0x200,(char *)0x70cf13,param_5);
  uVar3 = 0xcbf29ce484222645;
  if (local_260[0] != 0) {
    uVar3 = 0xcbf29ce484222645;
    pbVar2 = (byte *)((ulong)local_260 | 1);
    bVar1 = local_260[0];
    do {
      uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  param_4[0xf] = uVar3;
  snprintf((char *)local_260,0x200,(char *)0x7144f8,param_5);
  uVar3 = 0xcbf29ce484222645;
  if (local_260[0] != 0) {
    uVar3 = 0xcbf29ce484222645;
    pbVar2 = (byte *)((ulong)local_260 | 1);
    bVar1 = local_260[0];
    do {
      uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  param_4[0x10] = uVar3;
  snprintf((char *)local_260,0x200,(char *)0x71e3f9,param_5);
  uVar3 = 0xcbf29ce484222645;
  if (local_260[0] != 0) {
    uVar3 = 0xcbf29ce484222645;
    pbVar2 = (byte *)((ulong)local_260 | 1);
    bVar1 = local_260[0];
    do {
      uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  puVar5 = param_4 + 0x11;
  *puVar5 = uVar3;
  FUN__text__003c8320(lVar4,puVar5);
  FUN__text__003c81e0(lVar4,param_4 + 4,puVar5);
  snprintf((char *)local_260,0x200,(char *)0x720cd9,param_5);
  uVar3 = 0xcbf29ce484222645;
  if (local_260[0] != 0) {
    uVar3 = 0xcbf29ce484222645;
    pbVar2 = (byte *)((ulong)local_260 | 1);
    bVar1 = local_260[0];
    do {
      uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  param_4[0x12] = uVar3;
  snprintf((char *)local_260,0x200,(char *)0x714eee,param_5);
  uVar3 = 0xcbf29ce484222645;
  if (local_260[0] != 0) {
    uVar3 = 0xcbf29ce484222645;
    pbVar2 = (byte *)((ulong)local_260 | 1);
    bVar1 = local_260[0];
    do {
      uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  param_4[0x13] = uVar3;
  snprintf((char *)local_260,0x200,(char *)0x71cd01,param_5);
  uVar3 = 0xcbf29ce484222645;
  if (local_260[0] != 0) {
    uVar3 = 0xcbf29ce484222645;
    pbVar2 = (byte *)((ulong)local_260 | 1);
    bVar1 = local_260[0];
    do {
      uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  param_4[0x14] = uVar3;
  snprintf((char *)local_260,0x200,(char *)0x714f07,param_5);
  uVar3 = 0xcbf29ce484222645;
  if (local_260[0] != 0) {
    uVar3 = 0xcbf29ce484222645;
    pbVar2 = (byte *)((ulong)local_260 | 1);
    bVar1 = local_260[0];
    do {
      uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  param_4[0x15] = uVar3;
  snprintf((char *)local_260,0x200,(char *)0x719e6a,param_5);
  uVar3 = 0xcbf29ce484222645;
  if (local_260[0] != 0) {
    uVar3 = 0xcbf29ce484222645;
    pbVar2 = (byte *)((ulong)local_260 | 1);
    bVar1 = local_260[0];
    do {
      uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  param_4[0x16] = uVar3;
  snprintf((char *)local_260,0x200,(char *)0x72002c,param_5);
  if (local_260[0] != 0) {
    pbVar2 = (byte *)((ulong)local_260 | 1);
    do {
      uVar6 = (uVar6 ^ local_260[0]) * 0x100000001b3;
      local_260[0] = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (local_260[0] != 0);
  }
  param_4[0x17] = uVar6;
  uVar7 = FUN__text__003c7a20(lVar4,param_4 + 1);
  *(undefined4 *)(param_4 + 0x18) = uVar7;
  *(undefined4 *)((long)param_4 + 0xc4) = param_2;
                    /* WARNING: Could not recover jumptable at 0x001b9924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  return;
}


