/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0049172C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0059172c; name: FUN_.text__0059172c
 */


undefined8 FUN__text__0059172c(long param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short sVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_60 [3]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_53; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_50 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_40 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short *local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_50[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = FUN__text__004aed30(param_2,*(undefined4 *)(param_1 + 0x68),auStack_40,param_1 + 0x40, // [自动静态注释] 调用尚未恢复正式名称的函数
                              param_1 + 0x34,(int *)(param_1 + 0x38),param_1 + 0x2c,param_1 + 0x30, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                              local_50,0,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if ((int)uVar6 == 1) { // [自动静态注释] 条件判断/分支
    if (*local_38 != 0x3039) { // [自动静态注释] 条件判断/分支
      return 7; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(local_38 + 2);
    *(uint *)(param_1 + 0x88) = (uint)(ushort)local_38[1];
    iVar1 = *(int *)(local_38 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(param_1 + 0x24) = iVar1;
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(local_38 + 0xe);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(local_38 + 0x10);
    uVar2 = *(uint *)(local_38 + 0x12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(uint *)(param_1 + 200) = uVar2;
    uVar4 = local_38[9]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(uint *)(param_1 + 0xb0) = uVar2 >> 2;
    *(uint *)(param_1 + 0x98) = (uint)uVar4;
    *(uint *)(param_1 + 0xcc) = *(int *)(param_1 + 0x2c) - uVar2;
    if (*(int *)(param_1 + 0x38) == 0) { // [自动静态注释] 条件判断/分支
      *(int *)(param_1 + 0x38) = iVar1 + -1;
    } // [自动静态注释] 作用域/控制流边界
    if (local_50[0] != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__004dd7a8(param_1,local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    sVar5 = local_38[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = *(undefined4 *)(local_38 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar7 = *(long *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(lVar7 + 0x2b0) = *(undefined4 *)(local_38 + 2);
    *(undefined4 *)(lVar7 + 0x2b4) = uVar3;
    *(undefined1 *)(lVar7 + 0x2ba) = 0;
    *(ushort *)(lVar7 + 0x2b8) = sVar5 << 7 | 0x10;
    if (*(long *)(param_1 + 0xc0) == 0) { // [自动静态注释] 条件判断/分支
      lVar7 = FUN__text__00400f80(5,*(undefined4 *)(param_1 + 200)); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(long *)(param_1 + 0xc0) = lVar7;
      if (lVar7 == 0) { // [自动静态注释] 条件判断/分支
        return 0x34; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    (**(code **)(**(long **)(param_1 + 0x58) + 0x28))(*(long **)(param_1 + 0x58),local_60); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    iVar1 = *(int *)(param_1 + 200) + *(int *)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(param_1 + 0x78) = iVar1 + *(int *)(param_1 + 0x9c);
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0xa0) + iVar1;
    FUN__text__004dd6d0(param_1,*(short *)(param_1 + 0x54) != 1,local_60); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_60[0] = (float)NEON_ucvtf(*(undefined4 *)(local_38 + 4)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_60[0] = local_60[0] * 0.001; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_53 = (undefined1)(int)*(float *)(*(long *)(param_1 + 0x18) + 0x318); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (**(code **)(**(long **)(param_1 + 0x58) + 0x30))(*(long **)(param_1 + 0x58),local_60); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar6 = (**(code **)(**(long **)(param_1 + 0x58) + 0x38))(*(long **)(param_1 + 0x58),1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar6; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


