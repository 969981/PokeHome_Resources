/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0004E774
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0014e774; name: FUN_.text__0014e774
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0014e774(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar1 = *_DAT_008a0300; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int *)(param_1 + 0x100) == 0) { // [自动静态注释] 条件判断/分支
    lVar6 = *(long *)(param_1 + 0x58) + (long)iVar1 * 0x168; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__006ec8e0(lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(int *)(lVar6 + 0x160) != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__006eddd4(lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined4 *)(lVar6 + 0x160) = 0;
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__006ec93c(lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined1 *)(param_1 + 0x109) = 1;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  pcVar5 = *(code **)(param_1 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)(param_1 + 0x104) = iVar1;
  if (pcVar5 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    (*pcVar5)(param_1 + 0xa0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    iVar1 = *(int *)(param_1 + 0x104); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar4 = _DAT_008a00b0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = _DAT_008a00a8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = _DAT_008a00a0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x80) = _DAT_008a0098;
  *(undefined8 *)(param_1 + 0x88) = uVar2;
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  *(undefined8 *)(param_1 + 0x98) = uVar4;
  lVar6 = *(long *)(param_1 + 0x58) + (long)iVar1 * 0x168; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006ec8e0(lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
  (**(code **)(param_1 + 0x80))(param_1 + 0xa0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*(int *)(lVar6 + 0x160) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__006eddd4(lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)(lVar6 + 0x160) = 0;
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__006ec93c(lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005b5520(*_DAT_0089f418,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(param_1 + 0x109) = 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


