/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0020A2F4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0030a2f4; name: FUN_.text__0030a2f4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0030a2f4(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  MutexType *pMVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_b8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_b0 [6]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_80 [48]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar4 = _DAT_0089f550; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*_DAT_0089f550 == 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar8 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005da7f0(auStack_80,*_DAT_0089f550,lVar8 + 0x180,*(undefined8 *)(lVar8 + 400)); // [自动静态注释] 调用尚未恢复正式名称的函数
  pMVar1 = (MutexType *)(lVar8 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::os::LockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar5 = FUN__text__005dd608(auStack_80); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined4 *)(lVar8 + 0x208) = uVar5;
  nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*(int *)(lVar8 + 0x208) - 1U < 2) { // [自动静态注释] 条件判断/分支
    local_b8 = lVar8 + 0x199; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((*(byte *)(lVar8 + 0x198) & 1) != 0) { // [自动静态注释] 条件判断/分支
      local_b8 = *(long *)(lVar8 + 0x1a8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__002148dc(local_b0,&local_b8,auStack_80); // [自动静态注释] 调用尚未恢复正式名称的函数
    plVar2 = _DAT_0089f5d0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (local_b0[0] != 0) { // [自动静态注释] 条件判断/分支
      plVar2 = (long *)(local_b0[0] + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    plVar3 = local_b0 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (local_b0[3] != 0) { // [自动静态注释] 条件判断/分支
      plVar3 = plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar6 = nn::fs::DeleteFile((char *)*plVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(uint *)(lVar8 + 0x210) = uVar6;
    nn::os::LockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    iVar7 = FUN__text__005dd758(auStack_80); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar6 & 0x3fffff) != 0xe02) { // [自动静态注释] 条件判断/分支
      *(int *)(lVar8 + 0x210) = iVar7;
      *(bool *)(lVar8 + 0x20c) = iVar7 == 0;
    } // [自动静态注释] 作用域/控制流边界
    nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if ((local_b0[3] != 0) && (local_b0[0] != 0)) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(local_b0[0] + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    local_b0[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_b0[1] = 0xcbf29ce484222645; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_b0[2] = 0x70f683; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_b0[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (local_b0[4] != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(local_b0[4] + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005daa98(*plVar4,auStack_80); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_50 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


