/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004919C4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005919c4; name: FUN_.text__005919c4
 */


int FUN__text__005919c4(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar6 = FUN__text__004dd6f0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (iVar6 == 1) { // [自动静态注释] 条件判断/分支
    if ((*(char *)(param_1 + 0xe4) != '\0') && (*(long *)(param_1 + 0xd8) != 0)) { // [自动静态注释] 条件判断/分支
      FUN__text__00400fc0(5); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)(param_1 + 0xe4) = 0;
    } // [自动静态注释] 作用域/控制流边界
    *(undefined1 *)(param_1 + 0xb8) = 1;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    uVar3 = *(int *)(param_1 + 0xb0) - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar5 = *(int *)(param_1 + 0x84) / 400; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(param_1 + 0xb4) = iVar5;
    uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(uint *)(param_1 + 0x98) != 0) { // [自动静态注释] 条件判断/分支
      uVar4 = *(uint *)(param_1 + 0x28) / *(uint *)(param_1 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (uVar3 <= uVar4) { // [自动静态注释] 条件判断/分支
      uVar4 = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(uint *)(param_1 + 0xa4) = uVar4;
    lVar7 = *(long *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar1 = (uint *)(lVar7 + 0x313); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar2 = *(int *)(lVar7 + 0x30c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((*puVar1 & 0x400000) != 0) { // [自动静态注释] 条件判断/分支
      iVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(int *)(param_1 + 0xb4) = iVar2 + iVar5;
    *(uint *)(param_1 + 0x28) = iVar2 + *(uint *)(param_1 + 0x28);
    *(undefined4 *)(lVar7 + 0x30c) = 0;
    *puVar1 = *puVar1 & 0xfe3fffff;
  } // [自动静态注释] 作用域/控制流边界
  return iVar6; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


