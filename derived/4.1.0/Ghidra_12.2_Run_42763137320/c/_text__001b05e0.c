/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001b05e0; name: FUN_.text__001b05e0
 */


void FUN__text__001b05e0(long param_1,int param_2,undefined8 param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  byte local_268 [520];
  
  lVar3 = *(long *)(param_1 + 8);
  *(int *)(param_1 + 0x48) = param_2;
  *(undefined8 *)(param_1 + 0x50) = param_3;
  lVar6 = *(long *)(lVar3 + 0x2d0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    param_2 = *(int *)(param_1 + 0x48);
  }
  memset(local_268,0,0x200);
  if (param_2 == 0) {
    lVar7 = 0;
    *(undefined8 *)(param_1 + 0x28) = 0x794215e108f37f7;
    local_280 = 0x95c160825a8f36dd;
    local_288 = 0xb9f4499194ac2b10;
    pbVar8 = (byte *)((ulong)local_268 | 1);
    local_290 = 0x2d1650cbf52f3223;
    local_298 = 0xd604f48fcb9ed8d4;
    local_2a0 = 0xe1155786354dbd14;
    local_2a8 = 0xb994479a2f134fb9;
    do {
      lVar9 = 0;
      do {
        uVar10 = *(undefined8 *)(lVar9 * 0x28 + 0x86db60 + lVar7 * 8);
        snprintf((char *)local_268,0x200,(char *)0x71e3c5,0x716818,uVar10);
        uVar4 = 0xcbf29ce484222645;
        if (local_268[0] != 0) {
          uVar4 = 0xcbf29ce484222645;
          pbVar5 = pbVar8;
          bVar1 = local_268[0];
          do {
            uVar4 = (uVar4 ^ bVar1) * 0x100000001b3;
            bVar1 = *pbVar5;
            pbVar5 = pbVar5 + 1;
          } while (bVar1 != 0);
        }
        *(ulong *)(param_1 + lVar9 * 0xa0 + lVar7 * 0x20 + 0x58) = uVar4;
        snprintf((char *)local_268,0x200,(char *)0x7192d1,0x716818,0x71d8ae,uVar10);
        uVar4 = 0xcbf29ce484222645;
        if (local_268[0] != 0) {
          uVar4 = 0xcbf29ce484222645;
          pbVar5 = pbVar8;
          bVar1 = local_268[0];
          do {
            uVar4 = (uVar4 ^ bVar1) * 0x100000001b3;
            bVar1 = *pbVar5;
            pbVar5 = pbVar5 + 1;
          } while (bVar1 != 0);
        }
        *(ulong *)(param_1 + lVar9 * 0xa0 + lVar7 * 0x20 + 0x60) = uVar4;
        snprintf((char *)local_268,0x200,(char *)0x71e3e3,0x716818,0x71d8ae,uVar10);
        uVar4 = 0xcbf29ce484222645;
        if (local_268[0] != 0) {
          uVar4 = 0xcbf29ce484222645;
          pbVar5 = pbVar8;
          bVar1 = local_268[0];
          do {
            uVar4 = (uVar4 ^ bVar1) * 0x100000001b3;
            bVar1 = *pbVar5;
            pbVar5 = pbVar5 + 1;
          } while (bVar1 != 0);
        }
        *(ulong *)(param_1 + lVar9 * 0xa0 + lVar7 * 0x20 + 0x68) = uVar4;
        snprintf((char *)local_268,0x200,(char *)0x7144db,0x716818,0x71d8ae,uVar10);
        uVar4 = 0xcbf29ce484222645;
        if (local_268[0] != 0) {
          uVar4 = 0xcbf29ce484222645;
          pbVar5 = pbVar8;
          bVar1 = local_268[0];
          do {
            uVar4 = (uVar4 ^ bVar1) * 0x100000001b3;
            bVar1 = *pbVar5;
            pbVar5 = pbVar5 + 1;
          } while (bVar1 != 0);
        }
        lVar2 = lVar9 * 0xa0;
        lVar9 = lVar9 + 1;
        *(ulong *)(param_1 + lVar2 + lVar7 * 0x20 + 0x70) = uVar4;
      } while (lVar9 != 6);
      lVar7 = lVar7 + 1;
    } while (lVar7 != 5);
  }
  else {
    lVar7 = 0;
    *(undefined8 *)(param_1 + 0x28) = 0x5ef1d46769060075;
    local_280 = 0x6abb06f79b51248f;
    local_288 = 0xddd80dedd17abe1e;
    pbVar8 = (byte *)((ulong)local_268 | 1);
    local_290 = 0x6151534b496ebb55;
    local_298 = 0xc33c26c105471338;
    local_2a0 = 0xf63e96d98d199318;
    local_2a8 = 0x6d65a21f04e1d48d;
    do {
      lVar9 = 0;
      do {
        uVar10 = *(undefined8 *)(lVar9 * 0x28 + 0x86db60 + lVar7 * 8);
        snprintf((char *)local_268,0x200,(char *)0x71e3c5,0x719e54,uVar10);
        uVar4 = 0xcbf29ce484222645;
        if (local_268[0] != 0) {
          uVar4 = 0xcbf29ce484222645;
          pbVar5 = pbVar8;
          bVar1 = local_268[0];
          do {
            uVar4 = (uVar4 ^ bVar1) * 0x100000001b3;
            bVar1 = *pbVar5;
            pbVar5 = pbVar5 + 1;
          } while (bVar1 != 0);
        }
        *(ulong *)(param_1 + lVar9 * 0xa0 + lVar7 * 0x20 + 0x58) = uVar4;
        snprintf((char *)local_268,0x200,(char *)0x7192d1,0x719e54,0x71d8ae,uVar10);
        uVar4 = 0xcbf29ce484222645;
        if (local_268[0] != 0) {
          uVar4 = 0xcbf29ce484222645;
          pbVar5 = pbVar8;
          bVar1 = local_268[0];
          do {
            uVar4 = (uVar4 ^ bVar1) * 0x100000001b3;
            bVar1 = *pbVar5;
            pbVar5 = pbVar5 + 1;
          } while (bVar1 != 0);
        }
        *(ulong *)(param_1 + lVar9 * 0xa0 + lVar7 * 0x20 + 0x60) = uVar4;
        snprintf((char *)local_268,0x200,(char *)0x71e3e3,0x719e54,0x71d8ae,uVar10);
        uVar4 = 0xcbf29ce484222645;
        if (local_268[0] != 0) {
          uVar4 = 0xcbf29ce484222645;
          pbVar5 = pbVar8;
          bVar1 = local_268[0];
          do {
            uVar4 = (uVar4 ^ bVar1) * 0x100000001b3;
            bVar1 = *pbVar5;
            pbVar5 = pbVar5 + 1;
          } while (bVar1 != 0);
        }
        *(ulong *)(param_1 + lVar9 * 0xa0 + lVar7 * 0x20 + 0x68) = uVar4;
        snprintf((char *)local_268,0x200,(char *)0x7144db,0x719e54,0x71d8ae,uVar10);
        uVar4 = 0xcbf29ce484222645;
        if (local_268[0] != 0) {
          uVar4 = 0xcbf29ce484222645;
          pbVar5 = pbVar8;
          bVar1 = local_268[0];
          do {
            uVar4 = (uVar4 ^ bVar1) * 0x100000001b3;
            bVar1 = *pbVar5;
            pbVar5 = pbVar5 + 1;
          } while (bVar1 != 0);
        }
        lVar2 = lVar9 * 0xa0;
        lVar9 = lVar9 + 1;
        *(ulong *)(param_1 + lVar2 + lVar7 * 0x20 + 0x70) = uVar4;
      } while (lVar9 != 6);
      lVar7 = lVar7 + 1;
    } while (lVar7 != 5);
  }
  *(undefined8 *)(param_1 + 0x418) = local_2a8;
  *(undefined8 *)(param_1 + 0x420) = local_2a0;
  *(undefined8 *)(param_1 + 0x428) = local_298;
  *(undefined8 *)(param_1 + 0x38) = local_290;
  *(undefined8 *)(param_1 + 0x40) = local_288;
  *(undefined8 *)(param_1 + 0x430) = local_280;
  FUN__text__0012c378(lVar3 + 0x110,param_1 + 0x430);
  FUN__text__003c7c60(lVar6,param_1 + 0x418,1);
  FUN__text__001b0494(param_1);
                    /* WARNING: Could not recover jumptable at 0x001b0b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  return;
}


