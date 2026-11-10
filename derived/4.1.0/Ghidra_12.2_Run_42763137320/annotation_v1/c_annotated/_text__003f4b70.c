/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002F4B70
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f4b70; name: FUN_.text__003f4b70
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__003f4b70(long *param_1,ulong param_2,undefined4 param_3,uint *param_4,uint param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                   undefined8 param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  char *__format; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char acStack_164 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_154 [260]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((param_4 != (uint *)0x0) && (*param_4 < 2)) { // [自动静态注释] 条件判断/分支
    __format = (char *)0x70effa; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (param_4[1] != 0) { // [自动静态注释] 条件判断/分支
      __format = (char *)0x70fb70; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    snprintf(acStack_164,0xf,__format,param_2 & 0xffffffff); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar3 = (long *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar3 == (long *)0x0) { // [自动静态注释] 条件判断/分支
      iVar1 = FUN__text__003f48a8(param_1,acStack_164,param_4,param_3,auStack_154,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      if ((iVar1 == 1) && // [自动静态注释] 条件判断/分支
         (uVar2 = FUN__text__003f4a50(auStack_154,param_3,param_5 & 1,param_6), (int)uVar2 == 1)) { // [自动静态注释] 调用尚未恢复正式名称的函数
        return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      do { // [自动静态注释] 循环/迭代
        iVar1 = FUN__text__003f48a8(param_1,acStack_164,param_4,param_3,auStack_154,plVar3 + 1); // [自动静态注释] 调用尚未恢复正式名称的函数
        if ((iVar1 == 1) && // [自动静态注释] 条件判断/分支
           (uVar2 = FUN__text__003f4a50(auStack_154,param_3,param_5 & 1,param_6), (int)uVar2 == 1)) // [自动静态注释] 调用尚未恢复正式名称的函数
        { // [自动静态注释] 作用域/控制流边界
          return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
        plVar3 = (long *)*plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (plVar3 != (long *)0x0); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


