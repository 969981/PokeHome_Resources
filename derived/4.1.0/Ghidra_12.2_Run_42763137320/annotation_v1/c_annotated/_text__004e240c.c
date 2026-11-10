/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003E240C
 * 用途/行为：用途尚未确认；代码可观察到：内存分配/释放, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e240c; name: FUN_.text__004e240c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN__text__004e240c(void *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ThreadType *pTVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ThreadType *pTVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *pvVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pTVar2 = _DAT_008a4ca8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (_DAT_008a4ca8[0x40] != (ThreadType)0x0) { // [自动静态注释] 条件判断/分支
    return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)((long)param_1 + 0x128) = 0;
  nn::os::InitializeEvent((long)param_1 + 0x100,0,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar1 = _DAT_008a4900; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = *(ulong *)(_DAT_008a4900 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pvVar5 = (void *)aligned_alloc(0x10000,uVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(void **)(pTVar2 + 0x1c0) = pvVar5;
  if (pvVar5 != (void *)0x0) { // [自动静态注释] 条件判断/分支
    *(int *)(pTVar2 + 0x1d0) = (int)uVar6;
    iVar4 = nn::os::CreateThread // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      (pTVar2,_DAT_008a4cb0,param_1,pvVar5,uVar6 & 0xffffffff,*(int *)(lVar1 + 0x40) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      ); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    pTVar3 = _DAT_008a4ca8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (iVar4 == 0) { // [自动静态注释] 条件判断/分支
      nn::os::SetThreadName(_DAT_008a4ca8,(char *)0x710638); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      nn::os::SetThreadCoreMask(pTVar3,*(int *)(lVar1 + 0x50),*(ulong *)(lVar1 + 0x58)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      nn::os::StartThread(pTVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (*(long *)(pTVar2 + 0x1c8) != 0) { // [自动静态注释] 条件判断/分支
        free(*(void **)(pTVar2 + 0x1c0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      *(undefined8 *)(pTVar2 + 0x1c0) = 0;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  uVar7 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pTVar2[0x40] == (ThreadType)0x0) { // [自动静态注释] 条件判断/分支
    uVar7 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar7; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


