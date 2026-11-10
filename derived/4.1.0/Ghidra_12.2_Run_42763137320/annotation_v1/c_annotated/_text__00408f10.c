/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00308F10
 * 用途/行为：用途尚未确认；代码可观察到：内存分配/释放, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00408f10; name: FUN_.text__00408f10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__00408f10(void) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ThreadType TVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ThreadType *pTVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ThreadType *pTVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *pvVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_44; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_40 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar7 = _DAT_008a49f0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar6 = _DAT_008a49e8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar5 = _DAT_008a49e0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *_DAT_008a49d8 = 0;
  *puVar5 = 0;
  *puVar6 = 1;
  puVar5 = _DAT_008a4a00; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *puVar7 = 0;
  *puVar5 = 0xbf800000;
  nn::os::InitializeEvent(_DAT_008a49f8,0,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar3 = _DAT_008a4900; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar13 = *(ulong *)(_DAT_008a4900 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pvVar11 = (void *)aligned_alloc(0x10000,uVar13); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pTVar8 = _DAT_008a4a08; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(void **)(_DAT_008a4a08 + 0x1c0) = pvVar11;
  if (pvVar11 != (void *)0x0) { // [自动静态注释] 条件判断/分支
    *(int *)(pTVar8 + 0x1d0) = (int)uVar13;
    iVar10 = nn::os::CreateThread // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                       (pTVar8,_DAT_008a4a10,(void *)0x0,pvVar11,uVar13 & 0xffffffff, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        *(int *)(lVar3 + 0x20));
    pTVar9 = _DAT_008a4a08; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (iVar10 == 0) { // [自动静态注释] 条件判断/分支
      nn::os::SetThreadName(_DAT_008a4a08,(char *)0x70d338); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      nn::os::SetThreadCoreMask(pTVar9,*(int *)(lVar3 + 0x30),*(ulong *)(lVar3 + 0x38)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      nn::os::StartThread(pTVar9); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      TVar2 = pTVar8[0x40]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto joined_r0x004090dc; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if (*(long *)(pTVar8 + 0x1c8) != 0) { // [自动静态注释] 条件判断/分支
      free(*(void **)(pTVar8 + 0x1c0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(pTVar8 + 0x1c0) = 0;
  } // [自动静态注释] 作用域/控制流边界
  TVar2 = pTVar8[0x40]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
joined_r0x004090dc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (TVar2 == (ThreadType)0x0) { // [自动静态注释] 条件判断/分支
    return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  local_44 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = 0xffffffff00000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar12 = (undefined8 *)FUN__text__00400f80(0,0x560); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (puVar12 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    FUN__text__0040632c(puVar12,&local_50,local_50,1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar10 = FUN__text__00406cc0(puVar12,1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (iVar10 == 1) { // [自动静态注释] 条件判断/分支
      FUN__text__004881d0(*(undefined4 *)(puVar12 + 0xc),auStack_40,&local_14); // [自动静态注释] 调用尚未恢复正式名称的函数
      iVar10 = FUN__text__004892a0(local_14,puVar12 + 0x19,auStack_40,3); // [自动静态注释] 调用尚未恢复正式名称的函数
      piVar4 = _DAT_008a49d0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (iVar10 != 1) { // [自动静态注释] 条件判断/分支
        (**(code **)*puVar12)(puVar12); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        FUN__text__00400fc0(0,puVar12); // [自动静态注释] 调用尚未恢复正式名称的函数
        return iVar10; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      plVar1 = (long *)(_DAT_008a49d0 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*plVar1 == 0) { // [自动静态注释] 条件判断/分支
        *(undefined8 **)(_DAT_008a49d0 + 2) = puVar12;
      } // [自动静态注释] 作用域/控制流边界
      puVar12[4] = *plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 **)(piVar4 + 4) = puVar12;
      *piVar4 = *piVar4 + 1;
      return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    (**(code **)*puVar12)(puVar12); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__00400fc0(0,puVar12); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return 0x34; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


