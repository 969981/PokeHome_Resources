/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00491680
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00591680; name: FUN_.text__00591680
 */


undefined8 FUN__text__00591680(long param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar5 = FUN__text__004dd450(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (param_2 < 2) { // [自动静态注释] 条件判断/分支
    uVar5 = FUN__text__00591494(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((int)uVar5 != 1) { // [自动静态注释] 条件判断/分支
      return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(uint *)(param_1 + 0x98) != 0) { // [自动静态注释] 条件判断/分支
      uVar4 = *(uint *)(param_1 + 0x28) / *(uint *)(param_1 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    lVar6 = *(long *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar1 = (uint *)(lVar6 + 0x313); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(byte *)(param_1 + 0x20) = (byte)(*puVar1 >> 0x14) & 2 | *(byte *)(param_1 + 0x20) & 0xfd;
    uVar3 = *(int *)(param_1 + 0xb0) - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar3 <= uVar4) { // [自动静态注释] 条件判断/分支
      uVar4 = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(uint *)(param_1 + 0xa4) = uVar4;
    uVar2 = *(undefined4 *)(lVar6 + 0x30c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((*puVar1 & 0x400000) != 0) { // [自动静态注释] 条件判断/分支
      uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *puVar1 = *puVar1 & 0xfe3fffff;
    *(undefined4 *)(lVar6 + 0x30c) = uVar2;
  } // [自动静态注释] 作用域/控制流边界
  return uVar5; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


