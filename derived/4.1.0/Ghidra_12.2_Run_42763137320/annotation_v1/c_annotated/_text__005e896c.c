/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004E896C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e896c; name: FUN_.text__005e896c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005e896c(long param_1,char *param_2,uint param_3,int param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ThreadType *pTVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined1 *)(param_1 + 600) = 0;
  *(undefined1 *)(param_1 + 0x259) = 0;
  pTVar1 = (ThreadType *)(param_1 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_1 + 0x25a) = 0;
  if ((int)param_3 < 0) { // [自动静态注释] 条件判断/分支
    nn::os::CreateThread // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (pTVar1,_DAT_008a5b48,pTVar1,*(void **)(param_1 + 0x220),*(ulong *)(param_1 + 0x248), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               param_4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    param_3 = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = 7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::os::CreateThread // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (pTVar1,_DAT_008a5b48,pTVar1,*(void **)(param_1 + 0x220),*(ulong *)(param_1 + 0x248), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               param_4,param_3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar2 = 1L << ((ulong)param_3 & 0x3f); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  nn::os::SetThreadCoreMask(pTVar1,param_3,uVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::os::SetThreadName(pTVar1,param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::os::StartThread(pTVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


