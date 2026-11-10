/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005AA8DC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006aa8dc; name: FUN_.text__006aa8dc
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__006aa8dc(long param_1,int param_2,int param_3,int param_4,uint param_5,ulong param_6, // [自动静态注释] 调用尚未恢复正式名称的函数
                   int param_7,uint param_8,int param_9,byte param_10,byte param_11,byte param_12, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                   int param_13,int param_14) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = (uint)param_6 & 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = *(uint *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((((((int)(uVar4 & 3) < param_2) || ((int)(uVar4 >> 2 & 3) < param_3)) || // [自动静态注释] 条件判断/分支
       ((int)(uVar4 >> 4 & 3) < param_4)) || // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      ((((int)(uVar4 >> 6 & 7) < (int)param_5 || ((uVar4 >> 9 & 1) < uVar2)) || // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
       (((int)(uVar4 >> 10 & 3) < param_7 || // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        (((uVar4 >> 0xc & 1) < (param_8 & 1) || ((int)(uVar4 >> 0xd & 3) < param_9)))))))) || // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
     (((uVar4 >> 0xf & 1) < (param_10 & 1) || // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      (((((uVar4 >> 0x10 & 1) < (param_11 & 1) || ((uVar4 >> 0x11 & 1) < (param_12 & 1))) || // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        ((int)(uVar4 >> 0x12 & 3) < param_13)) || ((int)(uVar4 >> 0x14 & 3) < param_14)))))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*(long *)(param_1 + 0x18) != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__006a0f24(); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffc00000;
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffc00000;
    } // [自动静态注释] 作用域/控制流边界
    uVar3 = 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((param_8 & 1) == 0) { // [自动静态注释] 条件判断/分支
      uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    lVar5 = 0x74; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((param_12 & 1) == 0) { // [自动静态注释] 条件判断/分支
      lVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    lVar1 = (-(ulong)(param_5 >> 0x1f) & 0xfffffff000000000 | (ulong)param_5 << 4) + 0x1c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((param_11 & 1) == 0) { // [自动静态注释] 条件判断/分支
      lVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    lVar5 = FUN__text__006a0f04((uVar3 | ((long)param_4 + (long)param_2) * 0x10) + // [自动静态注释] 调用尚未恢复正式名称的函数
                                ((long)param_7 + (long)(int)param_5) * 4 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                ((long)param_9 + (long)param_3) * 0x14 + lVar1 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                (((ulong)param_10 & 1) + (param_6 & 1)) * 8 + lVar5 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                (long)param_13 * 0x20 + (long)param_14 * 0x58 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                (ulong)(0 < param_14) * 0x10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(long *)(param_1 + 0x18) = lVar5;
    if (lVar5 == 0) { // [自动静态注释] 条件判断/分支
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__006acd90(param_1,param_2,param_3,param_4,(ulong)param_5,uVar2,param_7,param_8 & 1, // [自动静态注释] 调用尚未恢复正式名称的函数
                        param_9,param_10 & 1,param_11 & 1,param_12 & 1,param_13,param_14); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


