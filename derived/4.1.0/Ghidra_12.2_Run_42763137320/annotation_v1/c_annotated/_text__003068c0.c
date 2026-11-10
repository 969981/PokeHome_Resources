/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002068C0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003068c0; name: FUN_.text__003068c0
 */


void FUN__text__003068c0(long param_1,undefined4 param_2,undefined4 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__00631268(*(undefined8 *)(param_1 + 0x58)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(int *)(param_1 + 0x90) == 2) { // [自动静态注释] 条件判断/分支
    FUN__text__0063505c(*(undefined8 *)(param_1 + 0x58),param_2,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (0 < *(int *)(lVar1 + 0x93498)) { // [自动静态注释] 条件判断/分支
    lVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar2 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (*(long *)(lVar2 + lVar1 * 8 + 0x7fc18) == *(long *)(param_1 + 0x60)) { // [自动静态注释] 条件判断/分支
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      lVar1 = lVar1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar2 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
    } while (lVar1 < *(int *)(lVar2 + 0x93498)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = *(undefined8 *)(param_1 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar2 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(lVar1 + (long)*(int *)(lVar2 + 0x93498) * 8 + 0x7fc18) = uVar3;
  lVar1 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(int *)(lVar1 + 0x93498) = *(int *)(lVar1 + 0x93498) + 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


