/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a2f40; name: FUN_.text__001a2f40
 */


void FUN__text__001a2f40(long param_1,undefined8 param_2)

{
  long lVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  undefined8 local_270;
  byte local_268 [520];
  
  lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  lVar10 = *(long *)(param_1 + 8) + 0x110;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  memset(local_268,0,0x200);
  lVar11 = 0;
  *(undefined8 *)(param_1 + 0x30) = 0xe74343968b0f16e6;
  *(undefined8 *)(param_1 + 0x50) = 0x5e272a113a101edd;
  *(undefined8 *)(param_1 + 0x58) = 0xb511d5c3195fa0be;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x28) = 0xc0b802cc3afa6c58;
  pbVar9 = (byte *)((ulong)local_268 | 1);
  puVar7 = (undefined8 *)(param_1 + 0x38);
  *puVar7 = 0xca089473ac39c328;
  *(undefined8 *)(param_1 + 0x40) = 0x36e86b7e522aff7d;
  *(undefined8 *)(param_1 + 0x60) = 0x7449852971878944;
  *(undefined8 *)(param_1 + 0x68) = 0x40fe65e29c67a993;
  *(undefined8 *)(param_1 + 0x48) = 0xaa307924a85a2008;
  puVar5 = (undefined8 *)(param_1 + 0x80);
  *puVar5 = 0xea2a37280485b5e7;
  *(undefined8 *)(param_1 + 0x70) = 0x7449862971878af7;
  *(undefined8 *)(param_1 + 0x78) = 0x40fe64e29c67a7e0;
  *(undefined8 *)(param_1 + 0x88) = 0x5c6800feefb4b90e;
  do {
    snprintf((char *)local_268,0x200,(char *)0x70ad4d,lVar11 * 6 & 0xffffffff);
    uVar4 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar4 = 0xcbf29ce484222645;
      pbVar6 = pbVar9;
      bVar2 = local_268[0];
      do {
        uVar4 = (uVar4 ^ bVar2) * 0x100000001b3;
        bVar2 = *pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (bVar2 != 0);
    }
    lVar1 = param_1 + lVar11 * 8;
    uVar13 = (uint)(lVar11 * 6);
    *(ulong *)(lVar1 + 0x90) = uVar4;
    snprintf((char *)local_268,0x200,(char *)0x70ad4d,(ulong)(uVar13 | 1));
    uVar4 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar4 = 0xcbf29ce484222645;
      pbVar6 = pbVar9;
      bVar2 = local_268[0];
      do {
        uVar4 = (uVar4 ^ bVar2) * 0x100000001b3;
        bVar2 = *pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (bVar2 != 0);
    }
    *(ulong *)(lVar1 + 0xb8) = uVar4;
    snprintf((char *)local_268,0x200,(char *)0x70ad4d,(ulong)(uVar13 + 2));
    uVar4 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar4 = 0xcbf29ce484222645;
      pbVar6 = pbVar9;
      bVar2 = local_268[0];
      do {
        uVar4 = (uVar4 ^ bVar2) * 0x100000001b3;
        bVar2 = *pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (bVar2 != 0);
    }
    *(ulong *)(lVar1 + 0xe0) = uVar4;
    snprintf((char *)local_268,0x200,(char *)0x70ad4d,(ulong)(uVar13 + 3));
    uVar4 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar4 = 0xcbf29ce484222645;
      pbVar6 = pbVar9;
      bVar2 = local_268[0];
      do {
        uVar4 = (uVar4 ^ bVar2) * 0x100000001b3;
        bVar2 = *pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (bVar2 != 0);
    }
    *(ulong *)(lVar1 + 0x108) = uVar4;
    snprintf((char *)local_268,0x200,(char *)0x70ad4d,(ulong)(uVar13 + 4));
    uVar4 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar4 = 0xcbf29ce484222645;
      pbVar6 = pbVar9;
      bVar2 = local_268[0];
      do {
        uVar4 = (uVar4 ^ bVar2) * 0x100000001b3;
        bVar2 = *pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (bVar2 != 0);
    }
    *(ulong *)(lVar1 + 0x130) = uVar4;
    snprintf((char *)local_268,0x200,(char *)0x70ad4d,(ulong)(uVar13 + 5));
    uVar4 = 0xcbf29ce484222645;
    if (local_268[0] != 0) {
      uVar4 = 0xcbf29ce484222645;
      pbVar6 = pbVar9;
      bVar2 = local_268[0];
      do {
        uVar4 = (uVar4 ^ bVar2) * 0x100000001b3;
        bVar2 = *pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (bVar2 != 0);
    }
    lVar11 = lVar11 + 1;
    *(ulong *)(lVar1 + 0x158) = uVar4;
  } while (lVar11 != 5);
  *(undefined8 *)(param_1 + 0x180) = 0x36e86d7e522b02e3;
  *(undefined8 *)(param_1 + 0x188) = 0x26932dc028e247bb;
  *(undefined8 *)(param_1 + 400) = 0xc59e08ac37c9feff;
  *(undefined8 *)(param_1 + 0x198) = 0x9c112667fc81d2a;
  *(undefined8 *)(param_1 + 0x1a0) = 0x4e1aea0601b2dd73;
  *(undefined8 *)(param_1 + 0x1a8) = 0xb7e5a7f8f89c1ae4;
  *(undefined8 *)(param_1 + 0x1b0) = 0x8de604cbbab1bce5;
  *(undefined8 *)(param_1 + 0x1b8) = 0x29ed5eca72c113f3;
  *(undefined8 *)(param_1 + 0x1c0) = 0x87ab1d5b5968c0ee;
  *(undefined8 *)(param_1 + 0x1c8) = 0x61253a0fb8d9b052;
  *(undefined8 *)(param_1 + 0x1d0) = 0xa829832cee72e4df;
  *(undefined8 *)(param_1 + 0x1d8) = 0xd403bfc192278d3f;
  *(undefined8 *)(param_1 + 0x1e0) = 0xe26fc0cc12057d8c;
  *(undefined8 *)(param_1 + 0x1e8) = 0x368df1ab22d9f120;
  *(undefined8 *)(param_1 + 0x1f0) = 0xd7f7ea642fcbf110;
  *(undefined8 *)(param_1 + 0x1f8) = 0x940fbfea97e3aeb7;
  *(undefined8 *)(param_1 + 0x200) = 0x8889ffc7118e8100;
  *(undefined8 *)(param_1 + 0x208) = 0x639a082c8029b4d6;
  uVar3 = FUN__text__0012ce7c(lVar10,0x725c80);
  *(undefined8 *)(param_1 + 0x218) = uVar3;
  uVar3 = FUN__text__0012ce7c(lVar10,0x725c88);
  *(undefined8 *)(param_1 + 0x220) = uVar3;
  uVar3 = FUN__text__0012ce7c(lVar10,0x725c90);
  *(undefined8 *)(param_1 + 0x228) = uVar3;
  uVar3 = FUN__text__0012ce7c(lVar10,0x725c98);
  *(undefined8 *)(param_1 + 0x230) = uVar3;
  uVar3 = FUN__text__0012ce7c(lVar10,0x725ca0);
  *(undefined8 *)(param_1 + 0x238) = uVar3;
  uVar3 = FUN__text__0012ce7c(lVar10,0x725ca8);
  *(undefined8 *)(param_1 + 0x240) = uVar3;
  uVar3 = FUN__text__0012ce7c(lVar10,0x725cb0);
  *(undefined8 *)(param_1 + 0x248) = uVar3;
  uVar3 = FUN__text__0012ce7c(lVar10,0x725cb8);
  *(undefined8 *)(param_1 + 0x250) = uVar3;
  uVar3 = FUN__text__0012ce7c(lVar10,0x725cc0);
  *(undefined8 *)(param_1 + 600) = uVar3;
  uVar3 = FUN__text__0012ce7c(lVar10,0x725cc8);
  *(undefined8 *)(param_1 + 0x260) = uVar3;
  uVar3 = FUN__text__0012ce7c(lVar10,0x725cd0);
  *(undefined8 *)(param_1 + 0x268) = uVar3;
  uVar3 = FUN__text__0012ce7c(lVar10,0x725cd8);
  *(undefined8 *)(param_1 + 0x270) = uVar3;
  uVar3 = FUN__text__0012ce7c(lVar10,0x725ce0);
  *(undefined8 *)(param_1 + 0x278) = uVar3;
  lVar10 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  if (lVar10 == 0) {
    FUN__text__003c7c60(0,puVar5,0);
    FUN__text__003c7c60(0,param_1 + 0x188,0);
  }
  else {
    plVar12 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN__text__003c7c60(lVar10,puVar5,0);
    FUN__text__003c7c60(lVar10,param_1 + 0x188,0);
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  FUN__text__003c8320(lVar8,puVar7);
  FUN__text__003c81e0(lVar8,param_1 + 0x1a8,puVar7);
  FUN__text__003c7c60(lVar8,(undefined8 *)(param_1 + 0x30),0);
  FUN__text__003c7c60(lVar8,puVar7,1);
  FUN__text__003c7c60(lVar8,(undefined8 *)(param_1 + 0x40),0);
  FUN__text__003c7c60(lVar8,(undefined8 *)(param_1 + 0x48),0);
  if (*(long *)(param_1 + 0x210) != 0) {
    FUN__text__003a14e8(*(long *)(param_1 + 0x210),0);
  }
  if (*(long *)(param_1 + 0x218) != 0) {
    FUN__text__003a14e8(*(long *)(param_1 + 0x218),0);
  }
  if (*(long *)(param_1 + 0x220) != 0) {
    FUN__text__003a14e8(*(long *)(param_1 + 0x220),0);
  }
  if (*(long *)(param_1 + 0x228) != 0) {
    FUN__text__003a14e8(*(long *)(param_1 + 0x228),0);
  }
  if (*(long *)(param_1 + 0x230) != 0) {
    FUN__text__003a14e8(*(long *)(param_1 + 0x230),0);
  }
  if (*(long *)(param_1 + 0x238) != 0) {
    FUN__text__003a14e8(*(long *)(param_1 + 0x238),0);
  }
  if (*(long *)(param_1 + 0x240) != 0) {
    FUN__text__003a14e8(*(long *)(param_1 + 0x240),0);
  }
  if (*(long *)(param_1 + 0x248) != 0) {
    FUN__text__003a14e8(*(long *)(param_1 + 0x248),0);
  }
  if (*(long *)(param_1 + 0x250) != 0) {
    FUN__text__003a14e8(*(long *)(param_1 + 0x250),0);
  }
  if (*(long *)(param_1 + 600) != 0) {
    FUN__text__003a14e8(*(long *)(param_1 + 600),0);
  }
  if (*(long *)(param_1 + 0x260) != 0) {
    FUN__text__003a14e8(*(long *)(param_1 + 0x260),0);
  }
  if (*(long *)(param_1 + 0x268) != 0) {
    FUN__text__003a14e8(*(long *)(param_1 + 0x268),0);
  }
  if (*(long *)(param_1 + 0x270) != 0) {
    FUN__text__003a14e8(*(long *)(param_1 + 0x270),0);
  }
  if (*(long *)(param_1 + 0x278) != 0) {
    FUN__text__003a14e8(*(long *)(param_1 + 0x278),0);
  }
  FUN__text__001a36bc(param_1,0);
  local_270 = 0xa3097788f56e012d;
  FUN__text__003c7c60(lVar8,&local_270,0);
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  return;
}


