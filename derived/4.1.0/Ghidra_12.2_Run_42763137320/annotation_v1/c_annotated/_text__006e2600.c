/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005E2600
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006e2600; name: FUN_.text__006e2600
 */


void FUN__text__006e2600(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  MutexType *pMVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(char *)(param_1 + 0x32) == '\0') { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_1 + 0x1260) = 0;
  *(undefined8 *)(param_1 + 0x1268) = 0;
  *(undefined8 *)(param_1 + 0x1270) = 0;
  *(undefined8 *)(param_1 + 0x1278) = 0;
  *(undefined8 *)(param_1 + 0x1280) = 0;
  *(undefined8 *)(param_1 + 0x1288) = 0;
  *(undefined4 *)(param_1 + 0x1290) = 0;
  *(undefined8 *)(param_1 + 0x1298) = 0;
  *(undefined8 *)(param_1 + 0x12a0) = 0;
  *(undefined8 *)(param_1 + 0x12a8) = 0;
  *(undefined8 *)(param_1 + 0x12b0) = 0;
  *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
  *(undefined4 *)(param_1 + 0x88) = 0;
  FUN__text__006d86a0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006d81c0(param_1 + 0x14c8); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (0 < *(int *)(param_1 + 8)) { // [自动静态注释] 条件判断/分支
    lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar5 = 0x8b8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar4 = lVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar7 = *(long *)(param_1 + 0x10) + lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(lVar7 + -0x7c0) = 0;
      *(undefined8 *)(lVar7 + -0x7b8) = 0;
      *(undefined8 *)(lVar7 + -2000) = 0;
      *(undefined8 *)(lVar7 + -0x7c8) = 0;
      *(undefined8 *)(lVar7 + -0x7e0) = 0;
      *(undefined8 *)(lVar7 + -0x7d8) = 0;
      *(undefined8 *)(lVar7 + -0x7f0) = 0;
      *(undefined8 *)(lVar7 + -0x7e8) = 0;
      *(undefined8 *)(lVar7 + -0x800) = 0;
      *(undefined8 *)(lVar7 + -0x7f8) = 0;
      *(undefined8 *)(lVar7 + -0x810) = 0;
      *(undefined8 *)(lVar7 + -0x808) = 0;
      *(undefined8 *)(lVar7 + -0x820) = 0;
      *(undefined8 *)(lVar7 + -0x818) = 0;
      *(undefined8 *)(lVar7 + -0x830) = 0;
      *(undefined8 *)(lVar7 + -0x828) = 0;
      *(undefined8 *)(lVar7 + -0x840) = 0;
      *(undefined8 *)(lVar7 + -0x838) = 0;
      *(undefined8 *)(lVar7 + -0x850) = 0;
      *(undefined8 *)(lVar7 + -0x848) = 0;
      *(undefined8 *)(lVar7 + -0x860) = 0;
      *(undefined8 *)(lVar7 + -0x858) = 0;
      *(undefined8 *)(lVar7 + -0x870) = 0;
      *(undefined8 *)(lVar7 + -0x868) = 0;
      *(undefined8 *)(lVar7 + -0x880) = 0;
      *(undefined8 *)(lVar7 + -0x878) = 0;
      *(undefined8 *)(lVar7 + -0x890) = 0;
      *(undefined8 *)(lVar7 + -0x888) = 0;
      *(undefined8 *)(lVar7 + -0x8a0) = 0;
      *(undefined8 *)(lVar7 + -0x898) = 0;
      *(undefined8 *)(lVar7 + -0x8b0) = 0;
      *(undefined8 *)(lVar7 + -0x8a8) = 0;
      lVar7 = *(long *)(param_1 + 0x10) + lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(lVar7 + -0x10) = 0;
      *(undefined8 *)(lVar7 + -8) = 0;
      *(undefined8 *)(lVar7 + -0x20) = 0;
      *(undefined8 *)(lVar7 + -0x18) = 0;
      *(undefined8 *)(lVar7 + -0x30) = 0;
      *(undefined8 *)(lVar7 + -0x28) = 0;
      *(undefined8 *)(lVar7 + -0x40) = 0;
      *(undefined8 *)(lVar7 + -0x38) = 0;
      *(undefined8 *)(lVar7 + -0x50) = 0;
      *(undefined8 *)(lVar7 + -0x48) = 0;
      *(undefined8 *)(lVar7 + -0x60) = 0;
      *(undefined8 *)(lVar7 + -0x58) = 0;
      *(undefined8 *)(lVar7 + -0x70) = 0;
      *(undefined8 *)(lVar7 + -0x68) = 0;
      *(undefined8 *)(lVar7 + -0x80) = 0;
      *(undefined8 *)(lVar7 + -0x78) = 0;
      *(undefined8 *)(lVar7 + -0x90) = 0;
      *(undefined8 *)(lVar7 + -0x88) = 0;
      *(undefined8 *)(lVar7 + -0xa0) = 0;
      *(undefined8 *)(lVar7 + -0x98) = 0;
      *(undefined8 *)(lVar7 + -0xb0) = 0;
      *(undefined8 *)(lVar7 + -0xa8) = 0;
      *(undefined8 *)(lVar7 + -0xc0) = 0;
      *(undefined8 *)(lVar7 + -0xb8) = 0;
      *(undefined8 *)(lVar7 + -0xd0) = 0;
      *(undefined8 *)(lVar7 + -200) = 0;
      *(undefined8 *)(lVar7 + -0xe0) = 0;
      *(undefined8 *)(lVar7 + -0xd8) = 0;
      *(undefined8 *)(lVar7 + -0xf0) = 0;
      *(undefined8 *)(lVar7 + -0xe8) = 0;
      *(undefined8 *)(lVar7 + -0x100) = 0;
      *(undefined8 *)(lVar7 + -0xf8) = 0;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + lVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = lVar5 + 0x9e8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[0x1e] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[0x1f] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[0x1c] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[0x1d] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[0x1a] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[0x1b] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[0x18] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[0x19] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[0x16] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[0x17] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[0x14] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[0x15] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[0x12] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[0x13] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[0x10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[0x11] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[0xe] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[0xf] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[0xc] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[0xd] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[0xb] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[8] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[9] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar1 = 0;
      puVar1[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar4 < *(int *)(param_1 + 8)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  nn::os::LockMutex((MutexType *)(param_1 + 0x16c0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (0 < *(int *)(param_1 + 0x8b8)) { // [自动静态注释] 条件判断/分支
    lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar5 = lVar4 * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__006d7a6c(*(undefined8 *)(*(long *)(param_1 + 0x8b0) + lVar5)); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__006e2430(param_1,*(undefined8 *)(*(long *)(param_1 + 0x8b0) + lVar5)); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar4 = lVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(*(long *)(param_1 + 0x8b0) + lVar5) = 0;
    } while (lVar4 < *(int *)(param_1 + 0x8b8)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0x8b8) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x16c0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  pMVar2 = (MutexType *)(param_1 + 0x16e0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::os::LockMutex(pMVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar10 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    plVar6 = (long *)(param_1 + 0x2b0 + lVar4 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    while (plVar6[0x40] == 0) { // [自动静态注释] 循环/迭代
      lVar4 = lVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar6 = plVar6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar4 == 0x40) { // [自动静态注释] 条件判断/分支
        nn::os::UnlockMutex(pMVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        if (!bVar10) { // [自动静态注释] 条件判断/分支
          return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
        goto LAB__text__006e288c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    lVar5 = param_1 + lVar4 * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar7 = plVar6[0x40]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      while (lVar8 = *(long *)(lVar7 + 0x1d0), *(long *)(lVar5 + 0xb0) == 0) { // [自动静态注释] 循环/迭代
        *(long *)(lVar5 + 0xb0) = lVar7;
        *(undefined8 *)(lVar7 + 0x1d0) = 0;
        *(undefined8 *)(lVar7 + 0x1d8) = 0;
        *plVar6 = lVar7;
        *(undefined1 *)(lVar7 + 0xf) = 0;
        lVar7 = lVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (lVar8 == 0) goto LAB__text__006e2864; // [自动静态注释] 条件判断/分支
      } // [自动静态注释] 作用域/控制流边界
      *(long *)(*plVar6 + 0x1d0) = lVar7;
      lVar9 = *plVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(lVar7 + 0x1d0) = 0;
      *(long *)(lVar7 + 0x1d8) = lVar9;
      *plVar6 = lVar7;
      *(undefined1 *)(lVar7 + 0xf) = 0;
      lVar7 = lVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar8 != 0); // [自动静态注释] 循环/迭代
LAB__text__006e2864: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    bVar3 = lVar4 == 0x3f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar4 = lVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar10 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (bVar3) { // [自动静态注释] 条件判断/分支
      nn::os::UnlockMutex(pMVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
LAB__text__006e288c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      memset((void *)(param_1 + 0x4b0),0,0x400); // [自动静态注释] 内存复制、清零或移动
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } while( true ); // [自动静态注释] 循环/迭代
} // [自动静态注释] 作用域/控制流边界


