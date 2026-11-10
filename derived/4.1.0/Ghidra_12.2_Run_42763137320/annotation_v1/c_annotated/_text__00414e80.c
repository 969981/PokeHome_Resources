/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00314E80
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00414e80; name: FUN_.text__00414e80
 */


void FUN__text__00414e80(void) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *__src; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  __dest = DAT_00aea230; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = (ulong)DAT_00aea238; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (DAT_00aea238 != 0) { // [自动静态注释] 条件判断/分支
    __src = DAT_00aea230 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      uVar3 = *__dest; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar1 = (int)uVar2 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (__dest < DAT_00aea230 + uVar1) { // [自动静态注释] 条件判断/分支
        memmove(__dest,__src,(ulong)(uint)((int)(DAT_00aea230 + uVar1) - (int)__dest) & 0xfffffff8); // [自动静态注释] 内存复制、清零或移动
        uVar1 = DAT_00aea238 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      DAT_00aea238 = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__004061f0(uVar3,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar2 = (ulong)DAT_00aea238; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (__dest != DAT_00aea230 + uVar2); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00414f20(); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00473890(); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


