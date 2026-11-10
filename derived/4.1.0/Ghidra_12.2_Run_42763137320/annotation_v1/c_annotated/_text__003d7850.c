/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002D7850
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d7850; name: FUN_.text__003d7850
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__003d7850(long param_1,int *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__s; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 8) != 0) { // [自动静态注释] 条件判断/分支
    return 0x72; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  __s = operator_new(0x240,_DAT_008a37f8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (__s == (void *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_1 + 8) = 0;
    return 0xc; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  memset(__s,0,0x208); // [自动静态注释] 内存复制、清零或移动
  *(undefined4 *)((long)__s + 0x200) = 0xffffffff;
  *(undefined8 *)((long)__s + 0x228) = 0x100000000;
  *(void **)(param_1 + 8) = __s;
  *(void **)((long)__s + 0x210) = __s;
  *(void **)((long)__s + 0x208) = __s;
  *(undefined8 *)((long)__s + 0x220) = 0;
  *(undefined8 *)((long)__s + 0x218) = 0;
  iVar1 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)((long)__s + 0x238) = 0;
  *(undefined8 *)((long)__s + 0x230) = 0;
  if (iVar1 == 2) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)((long)__s + 0x21c) = 8;
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (iVar1 == 1) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)((long)__s + 0x21c) = 2;
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)((long)__s + 0x21c) = 1;
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


