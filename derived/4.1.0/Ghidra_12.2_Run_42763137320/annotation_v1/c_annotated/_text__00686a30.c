/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00586A30
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00686a30; name: FUN_.text__00686a30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * FUN__text__00686a30(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__s; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_44; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  __s = (void *)FUN__text__006783d4(0x1f0); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (__s != (void *)0x0) { // [自动静态注释] 条件判断/分支
    memset(__s,0,0x1f0); // [自动静态注释] 内存复制、清零或移动
    lVar2 = FUN__text__00678424(0x1000,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long *)((long)__s + 0x1d0) = lVar2;
    if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
      nnosGetCurrentThread(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar1 = nnosGetThreadPriority(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar1 = nnosCreateThread(__s,_DAT_008a6628,__s,lVar2,param_1,uVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = nnResultIsFailure(uVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((uVar3 & 1) == 0) { // [自动静态注释] 条件判断/分支
        local_50 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_44 = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar4 = nnosGetCurrentThread(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        nnosGetThreadCoreMask(&local_44,&local_50,uVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        nnosSetThreadCoreMask(__s,local_44,local_50); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        if (param_4 != 0) { // [自动静态注释] 条件判断/分支
          nnosSetThreadNamePointer(__s,param_4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        *(undefined8 *)((long)__s + 0x1c0) = param_2;
        *(undefined8 *)((long)__s + 0x1c8) = param_3;
      } // [自动静态注释] 作用域/控制流边界
      uVar3 = nnResultIsFailure(uVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((uVar3 & 1) == 0) { // [自动静态注释] 条件判断/分支
        return __s; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__00686b98(__s); // [自动静态注释] 调用尚未恢复正式名称的函数
      return (void *)0x0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__006783e4(__s); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  nnResultIsFailure(0xffffffff); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return (void *)0x0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


