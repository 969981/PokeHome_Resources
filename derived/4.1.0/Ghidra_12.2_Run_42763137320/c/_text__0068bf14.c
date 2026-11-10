/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068bf14; name: FUN_.text__0068bf14
 */


undefined8
FUN__text__0068bf14(long param_1,undefined8 param_2,uint *param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  undefined8 uVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  char local_150 [256];
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return 0;
  }
  uVar2 = param_3[2];
  uVar1 = uVar2 & 0xff000000;
  uVar7 = uVar1;
  if (uVar1 != 0x5000000) {
    uVar7 = 0x4010000;
  }
  uVar3 = *param_3;
  if (uVar3 == 0x544e4646) {
    if ((short)param_3[1] != -0x101) {
      return 0;
    }
    if ((uVar7 ^ uVar2) >> 0x18 != 0) {
      return 0;
    }
    if ((((uVar2 >> 0x10 & 0xff) <= (uVar7 >> 0x10 & 1)) && (0x23 < param_3[3])) &&
       (1 < (ushort)param_3[4])) {
      *(bool *)(param_1 + 0x104) = uVar1 == 0x5000000;
      uVar5 = (ushort)param_3[4];
      uVar7 = (uint)uVar5;
      if (uVar1 == 0x5000000) {
        if (uVar5 == 0) {
LAB__text__0068c1bc:
          *(uint **)(param_1 + 0x18) = param_3;
          return 0;
        }
        piVar9 = (int *)0x0;
        piVar8 = (int *)((long)param_3 + (ulong)*(ushort *)((long)param_3 + 6));
        do {
          iVar4 = *piVar8;
          if (iVar4 < 0x50414d43) {
            if (iVar4 == 0x464e4946) {
              piVar9 = piVar8 + 2;
            }
            else if ((iVar4 != 0x474e524b) && (iVar4 != 0x48445743)) goto LAB__text__0068c1bc;
          }
          else if (((iVar4 != 0x50414d43) && (iVar4 != 0x504c4754)) && (iVar4 != 0x52474c47))
          goto LAB__text__0068c1bc;
          uVar7 = uVar7 - 1;
          piVar8 = (int *)((long)piVar8 + (ulong)(uint)piVar8[1]);
        } while (uVar7 != 0);
        *(uint **)(param_1 + 0x18) = param_3;
        if (piVar9 != (int *)0x0) {
          uVar6 = FUN__text__0068cfb0(param_3,0x474e524b);
          FUN__text__0068c53c(param_1,param_3,piVar9,uVar6,param_4,param_5,param_6);
LAB__text__0068c23c:
          FUN__text__0068d088(param_1,param_2);
          return 1;
        }
      }
      else {
        if (uVar5 == 0) goto LAB__text__0068c1bc;
        piVar9 = (int *)0x0;
        piVar8 = (int *)((long)param_3 + (ulong)*(ushort *)((long)param_3 + 6));
        do {
          iVar4 = *piVar8;
          if (iVar4 < 0x50414d43) {
            if (iVar4 == 0x464e4946) {
              piVar9 = piVar8 + 2;
            }
            else if ((iVar4 != 0x474e524b) && (iVar4 != 0x48445743)) goto LAB__text__0068c1bc;
          }
          else if (((iVar4 != 0x50414d43) && (iVar4 != 0x504c4754)) && (iVar4 != 0x52474c47))
          goto LAB__text__0068c1bc;
          uVar7 = uVar7 - 1;
          piVar8 = (int *)((long)piVar8 + (ulong)(uint)piVar8[1]);
        } while (uVar7 != 0);
        *(uint **)(param_1 + 0x18) = param_3;
        if (piVar9 != (int *)0x0) {
          uVar6 = FUN__text__0068cfb0(param_3,0x474e524b);
          FUN__text__0068c528(param_1,param_3,piVar9,uVar6,param_4,param_5,param_6);
          goto LAB__text__0068c23c;
        }
      }
    }
  }
  else {
    local_150[0xf0] = '\0';
    local_150[0xf1] = '\0';
    local_150[0xf2] = '\0';
    local_150[0xf3] = '\0';
    local_150[0xf4] = '\0';
    local_150[0xf5] = '\0';
    local_150[0xf6] = '\0';
    local_150[0xf7] = '\0';
    local_150[0xf8] = '\0';
    local_150[0xf9] = '\0';
    local_150[0xfa] = '\0';
    local_150[0xfb] = '\0';
    local_150[0xfc] = '\0';
    local_150[0xfd] = '\0';
    local_150[0xfe] = '\0';
    local_150[0xff] = '\0';
    local_150[0xe0] = '\0';
    local_150[0xe1] = '\0';
    local_150[0xe2] = '\0';
    local_150[0xe3] = '\0';
    local_150[0xe4] = '\0';
    local_150[0xe5] = '\0';
    local_150[0xe6] = '\0';
    local_150[0xe7] = '\0';
    local_150[0xe8] = '\0';
    local_150[0xe9] = '\0';
    local_150[0xea] = '\0';
    local_150[0xeb] = '\0';
    local_150[0xec] = '\0';
    local_150[0xed] = '\0';
    local_150[0xee] = '\0';
    local_150[0xef] = '\0';
    local_150[0xd0] = '\0';
    local_150[0xd1] = '\0';
    local_150[0xd2] = '\0';
    local_150[0xd3] = '\0';
    local_150[0xd4] = '\0';
    local_150[0xd5] = '\0';
    local_150[0xd6] = '\0';
    local_150[0xd7] = '\0';
    local_150[0xd8] = '\0';
    local_150[0xd9] = '\0';
    local_150[0xda] = '\0';
    local_150[0xdb] = '\0';
    local_150[0xdc] = '\0';
    local_150[0xdd] = '\0';
    local_150[0xde] = '\0';
    local_150[0xdf] = '\0';
    local_150[0xc0] = '\0';
    local_150[0xc1] = '\0';
    local_150[0xc2] = '\0';
    local_150[0xc3] = '\0';
    local_150[0xc4] = '\0';
    local_150[0xc5] = '\0';
    local_150[0xc6] = '\0';
    local_150[199] = '\0';
    local_150[200] = '\0';
    local_150[0xc9] = '\0';
    local_150[0xca] = '\0';
    local_150[0xcb] = '\0';
    local_150[0xcc] = '\0';
    local_150[0xcd] = '\0';
    local_150[0xce] = '\0';
    local_150[0xcf] = '\0';
    local_150[0xb0] = '\0';
    local_150[0xb1] = '\0';
    local_150[0xb2] = '\0';
    local_150[0xb3] = '\0';
    local_150[0xb4] = '\0';
    local_150[0xb5] = '\0';
    local_150[0xb6] = '\0';
    local_150[0xb7] = '\0';
    local_150[0xb8] = '\0';
    local_150[0xb9] = '\0';
    local_150[0xba] = '\0';
    local_150[0xbb] = '\0';
    local_150[0xbc] = '\0';
    local_150[0xbd] = '\0';
    local_150[0xbe] = '\0';
    local_150[0xbf] = '\0';
    local_150[0xa0] = '\0';
    local_150[0xa1] = '\0';
    local_150[0xa2] = '\0';
    local_150[0xa3] = '\0';
    local_150[0xa4] = '\0';
    local_150[0xa5] = '\0';
    local_150[0xa6] = '\0';
    local_150[0xa7] = '\0';
    local_150[0xa8] = '\0';
    local_150[0xa9] = '\0';
    local_150[0xaa] = '\0';
    local_150[0xab] = '\0';
    local_150[0xac] = '\0';
    local_150[0xad] = '\0';
    local_150[0xae] = '\0';
    local_150[0xaf] = '\0';
    local_150[0x90] = '\0';
    local_150[0x91] = '\0';
    local_150[0x92] = '\0';
    local_150[0x93] = '\0';
    local_150[0x94] = '\0';
    local_150[0x95] = '\0';
    local_150[0x96] = '\0';
    local_150[0x97] = '\0';
    local_150[0x98] = '\0';
    local_150[0x99] = '\0';
    local_150[0x9a] = '\0';
    local_150[0x9b] = '\0';
    local_150[0x9c] = '\0';
    local_150[0x9d] = '\0';
    local_150[0x9e] = '\0';
    local_150[0x9f] = '\0';
    local_150[0x80] = '\0';
    local_150[0x81] = '\0';
    local_150[0x82] = '\0';
    local_150[0x83] = '\0';
    local_150[0x84] = '\0';
    local_150[0x85] = '\0';
    local_150[0x86] = '\0';
    local_150[0x87] = '\0';
    local_150[0x88] = '\0';
    local_150[0x89] = '\0';
    local_150[0x8a] = '\0';
    local_150[0x8b] = '\0';
    local_150[0x8c] = '\0';
    local_150[0x8d] = '\0';
    local_150[0x8e] = '\0';
    local_150[0x8f] = '\0';
    local_150[0x70] = '\0';
    local_150[0x71] = '\0';
    local_150[0x72] = '\0';
    local_150[0x73] = '\0';
    local_150[0x74] = '\0';
    local_150[0x75] = '\0';
    local_150[0x76] = '\0';
    local_150[0x77] = '\0';
    local_150[0x78] = '\0';
    local_150[0x79] = '\0';
    local_150[0x7a] = '\0';
    local_150[0x7b] = '\0';
    local_150[0x7c] = '\0';
    local_150[0x7d] = '\0';
    local_150[0x7e] = '\0';
    local_150[0x7f] = '\0';
    local_150[0x60] = '\0';
    local_150[0x61] = '\0';
    local_150[0x62] = '\0';
    local_150[99] = '\0';
    local_150[100] = '\0';
    local_150[0x65] = '\0';
    local_150[0x66] = '\0';
    local_150[0x67] = '\0';
    local_150[0x68] = '\0';
    local_150[0x69] = '\0';
    local_150[0x6a] = '\0';
    local_150[0x6b] = '\0';
    local_150[0x6c] = '\0';
    local_150[0x6d] = '\0';
    local_150[0x6e] = '\0';
    local_150[0x6f] = '\0';
    local_150[0x50] = '\0';
    local_150[0x51] = '\0';
    local_150[0x52] = '\0';
    local_150[0x53] = '\0';
    local_150[0x54] = '\0';
    local_150[0x55] = '\0';
    local_150[0x56] = '\0';
    local_150[0x57] = '\0';
    local_150[0x58] = '\0';
    local_150[0x59] = '\0';
    local_150[0x5a] = '\0';
    local_150[0x5b] = '\0';
    local_150[0x5c] = '\0';
    local_150[0x5d] = '\0';
    local_150[0x5e] = '\0';
    local_150[0x5f] = '\0';
    local_150[0x40] = '\0';
    local_150[0x41] = '\0';
    local_150[0x42] = '\0';
    local_150[0x43] = '\0';
    local_150[0x44] = '\0';
    local_150[0x45] = '\0';
    local_150[0x46] = '\0';
    local_150[0x47] = '\0';
    local_150[0x48] = '\0';
    local_150[0x49] = '\0';
    local_150[0x4a] = '\0';
    local_150[0x4b] = '\0';
    local_150[0x4c] = '\0';
    local_150[0x4d] = '\0';
    local_150[0x4e] = '\0';
    local_150[0x4f] = '\0';
    local_150[0x30] = '\0';
    local_150[0x31] = '\0';
    local_150[0x32] = '\0';
    local_150[0x33] = '\0';
    local_150[0x34] = '\0';
    local_150[0x35] = '\0';
    local_150[0x36] = '\0';
    local_150[0x37] = '\0';
    local_150[0x38] = '\0';
    local_150[0x39] = '\0';
    local_150[0x3a] = '\0';
    local_150[0x3b] = '\0';
    local_150[0x3c] = '\0';
    local_150[0x3d] = '\0';
    local_150[0x3e] = '\0';
    local_150[0x3f] = '\0';
    local_150[0x20] = '\0';
    local_150[0x21] = '\0';
    local_150[0x22] = '\0';
    local_150[0x23] = '\0';
    local_150[0x24] = '\0';
    local_150[0x25] = '\0';
    local_150[0x26] = '\0';
    local_150[0x27] = '\0';
    local_150[0x28] = '\0';
    local_150[0x29] = '\0';
    local_150[0x2a] = '\0';
    local_150[0x2b] = '\0';
    local_150[0x2c] = '\0';
    local_150[0x2d] = '\0';
    local_150[0x2e] = '\0';
    local_150[0x2f] = '\0';
    local_150[0x10] = '\0';
    local_150[0x11] = '\0';
    local_150[0x12] = '\0';
    local_150[0x13] = '\0';
    local_150[0x14] = '\0';
    local_150[0x15] = '\0';
    local_150[0x16] = '\0';
    local_150[0x17] = '\0';
    local_150[0x18] = '\0';
    local_150[0x19] = '\0';
    local_150[0x1a] = '\0';
    local_150[0x1b] = '\0';
    local_150[0x1c] = '\0';
    local_150[0x1d] = '\0';
    local_150[0x1e] = '\0';
    local_150[0x1f] = '\0';
    local_150[0] = '\0';
    local_150[1] = '\0';
    local_150[2] = '\0';
    local_150[3] = '\0';
    local_150[4] = '\0';
    local_150[5] = '\0';
    local_150[6] = '\0';
    local_150[7] = '\0';
    local_150[8] = '\0';
    local_150[9] = '\0';
    local_150[10] = '\0';
    local_150[0xb] = '\0';
    local_150[0xc] = '\0';
    local_150[0xd] = '\0';
    local_150[0xe] = '\0';
    local_150[0xf] = '\0';
    nn::util::SNPrintf(local_150,0x100,(char *)0x714190,(ulong)(uVar3 >> 0x18),
                       (ulong)(uVar3 >> 0x10 & 0xff),(ulong)(uVar3 >> 8 & 0xff),
                       (ulong)(uVar3 & 0xff),0x54,0x4e,0x46,0x46);
  }
  return 0;
}


