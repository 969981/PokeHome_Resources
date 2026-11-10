/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000D92C4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d92c4; name: FUN_.text__001d92c4
 */


void FUN__text__001d92c4(long param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar4 = *(long *)(param_1 + 8) + 0x110; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = FUN__text__0012cb14(lVar4,param_1 + 0x2e8); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = FUN__text__0012cb14(lVar4,param_1 + 0x358); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003a14e8(uVar1,(param_2 ^ 0xffffffff) & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003a14e8(uVar2,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar4 = *(long *)(param_1 + 8) + 0x110; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = FUN__text__0012cb14(lVar4,param_1 + 0x2e8); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar4 = FUN__text__0012cb14(lVar4,param_1 + 0x358); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(int *)(param_1 + 0x6d8) == 2) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (*(int *)(param_1 + 0x6d8) == 1) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(lVar3 + 0x108) = 0;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*(char *)(lVar3 + 0x84) == '\0') { // [自动静态注释] 条件判断/分支
      *(undefined8 *)(lVar3 + 0x108) = 0;
      *(undefined1 *)(lVar3 + 0x110) = 0;
      *(undefined8 *)(lVar4 + 0x108) = 0x400000000;
      goto LAB__text__001d9384; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(lVar3 + 0x108) = 0x400000000;
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)(lVar3 + 0x110) = 0;
  *(undefined8 *)(lVar4 + 0x108) = 0;
LAB__text__001d9384: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined1 *)(lVar4 + 0x110) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


