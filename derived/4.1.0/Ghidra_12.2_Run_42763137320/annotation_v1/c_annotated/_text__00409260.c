/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00309260
 * 用途/行为：用途尚未确认；代码可观察到：内存分配/释放, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00409260; name: FUN_.text__00409260
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00409260(void) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  EventType *pEVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ThreadType *pTVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar2 = _DAT_008a49d0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1 = _DAT_008a49b0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(undefined8 **)(_DAT_008a49d0 + 4) != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    puVar9 = (undefined8 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar11 = *(undefined8 **)(_DAT_008a49d0 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      while ((puVar10 = puVar11, puVar9 != (undefined8 *)0x0 || // [自动静态注释] 循环/迭代
             (*(char *)((long)puVar10 + 0x555) == '\0'))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        pcVar12 = (code *)*puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (pcVar12 != (code *)0x0) { // [自动静态注释] 条件判断/分支
          uVar8 = FUN__text__0040dc30(); // [自动静态注释] 调用尚未恢复正式名称的函数
          (*pcVar12)(uVar8,*(undefined4 *)((long)puVar10 + 100),*(undefined4 *)(puVar10 + 0xd),1,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        puVar11 = (undefined8 *)puVar10[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        (**(code **)*puVar10)(puVar10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        FUN__text__00400fc0(0,puVar10); // [自动静态注释] 调用尚未恢复正式名称的函数
        puVar10 = puVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (puVar11 == (undefined8 *)0x0) goto LAB__text__004092f8; // [自动静态注释] 条件判断/分支
      } // [自动静态注释] 作用域/控制流边界
      puVar9 = puVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar11 = (undefined8 *)puVar10[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while ((undefined8 *)puVar10[4] != (undefined8 *)0x0); // [自动静态注释] 循环/迭代
LAB__text__004092f8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (puVar10 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      pcVar12 = (code *)*puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (pcVar12 != (code *)0x0) { // [自动静态注释] 条件判断/分支
        uVar8 = FUN__text__0040dc30(); // [自动静态注释] 调用尚未恢复正式名称的函数
        (*pcVar12)(uVar8,*(undefined4 *)((long)puVar10 + 100),*(undefined4 *)(puVar10 + 0xd),1,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      (**(code **)*puVar10)(puVar10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__00400fc0(0,puVar10); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *puVar2 = 0;
  puVar1 = _DAT_008a49c8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(puVar2 + 2) = 0;
  *(undefined8 *)(puVar2 + 4) = 0;
  *puVar1 = 0x3f8000003f800000;
  plVar5 = _DAT_008a4a20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*_DAT_008a4a20 != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *plVar5 = 0;
  } // [自动静态注释] 作用域/控制流边界
  lVar6 = _DAT_008a4a28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(_DAT_008a4a28 + 0x10) != 0) { // [自动静态注释] 条件判断/分支
    bVar7 = *(long *)(_DAT_008a4a28 + 0x10) != _DAT_008a4a28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(_DAT_008a4a28 + 0x18) = 0;
    if (bVar7) { // [自动静态注释] 条件判断/分支
      FUN__text__00400fc0(4); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(lVar6 + 0x10) = 0;
    *(undefined4 *)(lVar6 + 0x1c) = 0;
  } // [自动静态注释] 作用域/控制流边界
  *_DAT_008a4a18 = 0;
  *_DAT_008a4a30 = 0;
  pTVar4 = _DAT_008a4a08; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pEVar3 = _DAT_008a49f8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (_DAT_008a4a08[0x40] != (ThreadType)0x0) { // [自动静态注释] 条件判断/分支
    *_DAT_008a49d8 = 1;
    nn::os::SignalEvent(_DAT_008a49f8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::os::WaitThread(pTVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::os::DestroyThread(pTVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*(long *)(pTVar4 + 0x1c8) != 0) { // [自动静态注释] 条件判断/分支
      free(*(void **)(pTVar4 + 0x1c0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(pTVar4 + 0x1c0) = 0;
    pTVar4[0x40] = (ThreadType)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (pEVar3[0x13] == (EventType)0x1) { // [自动静态注释] 条件判断/分支
    nn::os::FinalizeEvent(_DAT_008a49f8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(pEVar3 + 0x18) = 0;
  *(undefined8 *)(pEVar3 + 0x20) = 0;
  *(undefined8 *)pEVar3 = 0;
  *(undefined8 *)(pEVar3 + 8) = 0;
  *(undefined8 *)(pEVar3 + 0x10) = 0;
  *_DAT_008a4a38 = 0;
  *_DAT_008a4a40 = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


