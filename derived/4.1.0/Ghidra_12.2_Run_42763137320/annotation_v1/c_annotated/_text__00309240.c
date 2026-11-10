/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00209240
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00309240; name: FUN_.text__00309240
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__00309240(long param_1,undefined8 *param_2,void *param_3,uint param_4,undefined8 param_5) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__s; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong __n; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *local_e0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *local_d8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *local_d0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *local_c8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long alStack_c0 [12]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  __n = (ulong)param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(param_1 + 0x200) != 0) { // [自动静态注释] 条件判断/分支
    if ((*(byte *)(*(long *)(param_1 + 0x200) + 0x259) & 1) == 0) { // [自动静态注释] 条件判断/分支
      FUN__text__005e8af0(*(undefined8 *)(param_1 + 0x200)); // [自动静态注释] 调用尚未恢复正式名称的函数
      bVar1 = *(byte *)(*(long *)(param_1 + 0x200) + 0x259); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      while ((bVar1 & 1) == 0) { // [自动静态注释] 循环/迭代
        nn::os::SleepThread(1000000); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        bVar1 = *(byte *)(*(long *)(param_1 + 0x200) + 0x259); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    if (*(long *)(param_1 + 0x200) != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(*(long *)(param_1 + 0x200) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined8 *)(param_1 + 0x200) = 0;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00308cf8(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar3 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((param_3 != (void *)0x0) && (param_4 != 0)) { // [自动静态注释] 条件判断/分支
    nn::os::LockMutex((MutexType *)(param_1 + 0x50)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar3 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x180) = *param_2;
    *(undefined8 *)(param_1 + 0x188) = uVar3;
    *(undefined8 *)(param_1 + 400) = uVar5;
    std::string::operator=((string *)(param_1 + 0x198),(string *)(param_2 + 3)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar6 = *(long **)(param_1 + 0x1f8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(uint *)(param_1 + 0x1b0) = param_4;
    __s = (void *)(**(code **)(*plVar6 + 0x10))(plVar6,__n,1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar7 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar7 = uVar7 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar7 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(long **)(uVar7 + *(long *)(uVar7 + 0x98) * 8 + 0x18) = plVar6;
    *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
    memset(__s,0,__n); // [自动静态注释] 内存复制、清零或移动
    *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
    lVar4 = *(long *)(param_1 + 0x1b8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(void **)(param_1 + 0x1b8) = __s;
    if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(**(long **)(param_1 + 0x1c0) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (*(long **)(param_1 + 0x1c0),lVar4,*(undefined8 *)(param_1 + 0x1c8), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 *(undefined8 *)(param_1 + 0x1d0));
      __s = *(void **)(param_1 + 0x1b8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(long **)(param_1 + 0x1c0) = plVar6;
    *(ulong *)(param_1 + 0x1c8) = __n;
    *(undefined8 *)(param_1 + 0x1d0) = 1;
    memcpy(__s,param_3,(ulong)*(uint *)(param_1 + 0x1b0)); // [自动静态注释] 内存复制、清零或移动
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x50)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_e0 = FUN__text__00309ff0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_d8 = FUN__text__0030a134; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_d0 = &LAB__text__0030a138; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_c8 = &LAB__text__0030a144; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    alStack_c0[0] = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__00309460(param_1,param_2,&local_e0,param_5,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    pcVar2 = local_d8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (local_d8 != (code *)0x0) { // [自动静态注释] 条件判断/分支
      local_d0 = (undefined1 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_c8 = (undefined1 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_e0 = (code *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_d8 = (code *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (*pcVar2)(alStack_c0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


