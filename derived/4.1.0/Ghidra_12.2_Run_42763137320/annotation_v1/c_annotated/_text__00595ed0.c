/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00495ED0
 * 用途/行为：用途尚未确认；代码可观察到：内存分配/释放, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00595ed0; name: FUN_.text__00595ed0
 */


void FUN__text__00595ed0(_func_void_void_ptr *param_1,void *param_2,int *param_3,ThreadType *param_4 // [自动静态注释] 调用尚未恢复正式名称的函数
                        ,char *param_5,long *param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *pvVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pvVar2 = (void *)(**(code **)(*param_6 + 0x20)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                             (param_6,*(undefined8 *)(param_3 + 2),0x1000,0x72057b,0xfe); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(void **)(param_4 + 0x1c0) = pvVar2;
  if (pvVar2 != (void *)0x0) { // [自动静态注释] 条件判断/分支
    uVar3 = *(ulong *)(param_3 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(param_4 + 0x1d0) = (int)uVar3;
    iVar1 = nn::os::CreateThread(param_4,param_1,param_2,pvVar2,uVar3 & 0xffffffff,*param_3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (iVar1 == 0) { // [自动静态注释] 条件判断/分支
      if (param_5 != (char *)0x0) { // [自动静态注释] 条件判断/分支
        nn::os::SetThreadName(param_4,param_5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      nn::os::SetThreadCoreMask(param_4,param_3[4],*(ulong *)(param_3 + 6)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      nn::os::StartThread(param_4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    free(*(void **)(param_4 + 0x1c0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined8 *)(param_4 + 0x1c0) = 0;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


