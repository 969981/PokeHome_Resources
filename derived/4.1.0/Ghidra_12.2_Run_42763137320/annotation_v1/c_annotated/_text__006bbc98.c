/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005BBC98
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006bbc98; name: FUN_.text__006bbc98
 */


void FUN__text__006bbc98(long *param_1,undefined8 param_2,undefined4 param_3,long param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        ulong param_5,undefined8 param_6,undefined8 param_7) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t __n; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *__s; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_e0 [128]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = *(uint *)(param_4 + 0x94) & ((int)*(uint *)(param_4 + 0x94) >> 0x1f ^ 0xffffffffU); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((param_5 & 1) == 0) { // [自动静态注释] 条件判断/分支
    uVar1 = *(uint *)(param_4 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if ((int)uVar1 < 1) { // [自动静态注释] 条件判断/分支
    __s = (undefined1 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    __n = FUN__text__006c1740(param_4,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    __s = auStack_e0 + (0x80 - (__n + 0xf & 0xfffffffffffffff0)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    memset(__s,0,__n); // [自动静态注释] 内存复制、清零或移动
    FUN__text__006c17b0(__s,__n,param_4,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  (**(code **)(*param_1 + 0x80))(param_1,param_2,param_3,param_6,__s,param_7); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


