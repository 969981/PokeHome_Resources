/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00421D10
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00521d10; name: FUN_.text__00521d10
 */


void FUN__text__00521d10(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = *(long *)(param_1 + 0x288); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((param_2 == 0) || (lVar2 == param_2)) { // [自动静态注释] 条件判断/分支
    if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__0051f360(lVar2,param_1,param_1 + 0x128); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(undefined4 *)(param_1 + 0x128) = 0x811c9dc5;
    *(undefined8 *)(param_1 + 0x234) = 0;
    *(undefined8 *)(param_1 + 0x23c) = 0;
    *(undefined8 *)(param_1 + 0x244) = 0;
    *(undefined8 *)(param_1 + 0x24c) = 0;
    *(undefined8 *)(param_1 + 0x254) = 0;
    *(undefined8 *)(param_1 + 0x25c) = 0;
    *(undefined8 *)(param_1 + 0x27d) = 0;
    *(undefined8 *)(param_1 + 300) = 0;
    *(undefined8 *)(param_1 + 0x134) = 0;
    *(undefined8 *)(param_1 + 0x13c) = 0;
    *(undefined8 *)(param_1 + 0x144) = 0;
    *(undefined8 *)(param_1 + 0x14c) = 0;
    *(undefined8 *)(param_1 + 0x154) = 0;
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x175) = 0;
    *(undefined4 *)(param_1 + 0x180) = 0x811c9dc5;
    *(undefined8 *)(param_1 + 0x184) = 0;
    *(undefined8 *)(param_1 + 0x18c) = 0;
    *(undefined8 *)(param_1 + 0x194) = 0;
    *(undefined8 *)(param_1 + 0x19c) = 0;
    *(undefined8 *)(param_1 + 0x1a4) = 0;
    *(undefined8 *)(param_1 + 0x1ac) = 0;
    *(undefined8 *)(param_1 + 0x1cd) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined4 *)(param_1 + 0x1d8) = 0x811c9dc5;
    *(undefined8 *)(param_1 + 0x1dc) = 0;
    *(undefined8 *)(param_1 + 0x1e4) = 0;
    *(undefined8 *)(param_1 + 0x1ec) = 0;
    *(undefined8 *)(param_1 + 500) = 0;
    *(undefined8 *)(param_1 + 0x1fc) = 0;
    *(undefined8 *)(param_1 + 0x204) = 0;
    *(undefined8 *)(param_1 + 0x210) = 0;
    *(undefined8 *)(param_1 + 0x218) = 0;
    *(undefined8 *)(param_1 + 0x220) = 0;
    *(undefined8 *)(param_1 + 0x225) = 0;
    *(undefined4 *)(param_1 + 0x230) = 0x811c9dc5;
    *(undefined8 *)(param_1 + 0x278) = 0;
    *(undefined8 *)(param_1 + 0x270) = 0;
    *(undefined8 *)(param_1 + 0x268) = 0;
    *(undefined1 *)(param_1 + 0x17c) = 1;
    *(undefined1 *)(param_1 + 0x1d4) = 1;
    *(undefined1 *)(param_1 + 0x22c) = 1;
    *(undefined1 *)(param_1 + 0x284) = 1;
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    *(undefined8 *)(param_1 + 0x288) = 0;
    *(undefined8 *)(param_1 + 0x290) = 0;
    if (*(uint *)(param_1 + 0x420) != 0) { // [自动静态注释] 条件判断/分支
      lVar2 = (ulong)*(uint *)(param_1 + 0x420) * 0x50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar5 = *(undefined8 **)(param_1 + 0x418); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        (**(code **)*puVar5)(puVar5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        lVar2 = lVar2 + -0x50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar5 = puVar5 + 10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (lVar2 != 0); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    *(undefined4 *)(param_1 + 0x420) = 0;
    FUN__text__0051cae0(param_1 + 0x428); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x460) = 0;
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = *(long *)(param_1 + 0x3f8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((param_2 == 0) || (lVar2 == param_2)) { // [自动静态注释] 条件判断/分支
    if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__0051f360(lVar2,param_1,param_1 + 0x298); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(undefined4 *)(param_1 + 0x298) = 0x811c9dc5;
    *(undefined8 *)(param_1 + 0x3a4) = 0;
    *(undefined8 *)(param_1 + 0x3ac) = 0;
    *(undefined8 *)(param_1 + 0x3b4) = 0;
    *(undefined8 *)(param_1 + 0x3bc) = 0;
    *(undefined8 *)(param_1 + 0x3c4) = 0;
    *(undefined8 *)(param_1 + 0x3cc) = 0;
    *(undefined8 *)(param_1 + 0x3ed) = 0;
    *(undefined8 *)(param_1 + 0x29c) = 0;
    *(undefined8 *)(param_1 + 0x2a4) = 0;
    *(undefined8 *)(param_1 + 0x2ac) = 0;
    *(undefined8 *)(param_1 + 0x2b4) = 0;
    *(undefined8 *)(param_1 + 700) = 0;
    *(undefined8 *)(param_1 + 0x2c4) = 0;
    *(undefined8 *)(param_1 + 0x2d0) = 0;
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    *(undefined8 *)(param_1 + 0x2e0) = 0;
    *(undefined8 *)(param_1 + 0x2e5) = 0;
    *(undefined4 *)(param_1 + 0x2f0) = 0x811c9dc5;
    *(undefined8 *)(param_1 + 0x2f4) = 0;
    *(undefined8 *)(param_1 + 0x2fc) = 0;
    *(undefined8 *)(param_1 + 0x304) = 0;
    *(undefined8 *)(param_1 + 0x30c) = 0;
    *(undefined8 *)(param_1 + 0x314) = 0;
    *(undefined8 *)(param_1 + 0x31c) = 0;
    *(undefined8 *)(param_1 + 0x33d) = 0;
    *(undefined8 *)(param_1 + 0x338) = 0;
    *(undefined8 *)(param_1 + 0x330) = 0;
    *(undefined8 *)(param_1 + 0x328) = 0;
    *(undefined4 *)(param_1 + 0x348) = 0x811c9dc5;
    *(undefined8 *)(param_1 + 0x34c) = 0;
    *(undefined8 *)(param_1 + 0x354) = 0;
    *(undefined8 *)(param_1 + 0x35c) = 0;
    *(undefined8 *)(param_1 + 0x364) = 0;
    *(undefined8 *)(param_1 + 0x36c) = 0;
    *(undefined8 *)(param_1 + 0x374) = 0;
    *(undefined8 *)(param_1 + 0x380) = 0;
    *(undefined8 *)(param_1 + 0x388) = 0;
    *(undefined8 *)(param_1 + 0x390) = 0;
    *(undefined8 *)(param_1 + 0x395) = 0;
    *(undefined4 *)(param_1 + 0x3a0) = 0x811c9dc5;
    *(undefined8 *)(param_1 + 1000) = 0;
    *(undefined8 *)(param_1 + 0x3e0) = 0;
    *(undefined8 *)(param_1 + 0x3d8) = 0;
    *(undefined1 *)(param_1 + 0x2ec) = 1;
    *(undefined1 *)(param_1 + 0x344) = 1;
    *(undefined1 *)(param_1 + 0x39c) = 1;
    *(undefined1 *)(param_1 + 0x3f4) = 1;
    *(undefined8 *)(param_1 + 0x3f8) = 0;
    *(undefined8 *)(param_1 + 0x400) = 0;
    if (*(uint *)(param_1 + 0x4b0) != 0) { // [自动静态注释] 条件判断/分支
      lVar2 = (ulong)*(uint *)(param_1 + 0x4b0) * 0x50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar5 = *(undefined8 **)(param_1 + 0x4a8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        (**(code **)*puVar5)(puVar5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        lVar2 = lVar2 + -0x50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar5 = puVar5 + 10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (lVar2 != 0); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    *(undefined4 *)(param_1 + 0x4b0) = 0;
    FUN__text__0051cae0(param_1 + 0x4b8); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x4f0) = 0;
    puVar5 = *(undefined8 **)(param_1 + 0x408); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = *(uint *)(param_1 + 0x410); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar5 = *(undefined8 **)(param_1 + 0x408); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = *(uint *)(param_1 + 0x410); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar4 = (ulong)uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 == 0) { // [自动静态注释] 条件判断/分支
    puVar3 = puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else if (param_2 == 0) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      FUN__text__0051ec50(puVar5[1],*puVar5,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar4 = (ulong)(*(int *)(param_1 + 0x410) - 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar3 = *(undefined8 **)(param_1 + 0x408); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (puVar5 < puVar3 + uVar4 * 2) { // [自动静态注释] 条件判断/分支
        memmove(puVar5,puVar5 + 2, // [自动静态注释] 内存复制、清零或移动
                (ulong)(uint)((int)(puVar3 + uVar4 * 2) - (int)puVar5) & 0xfffffff0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar4 = (ulong)(*(int *)(param_1 + 0x410) - 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar3 = *(undefined8 **)(param_1 + 0x408); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(int *)(param_1 + 0x410) = (int)uVar4;
    } while (puVar5 != puVar3 + uVar4 * 2); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    __dest = puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      while (__dest[1] == param_2) { // [自动静态注释] 循环/迭代
        FUN__text__0051ec50(param_2,*__dest,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar4 = (ulong)(*(int *)(param_1 + 0x410) - 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar5 = *(undefined8 **)(param_1 + 0x408); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (__dest < puVar5 + uVar4 * 2) { // [自动静态注释] 条件判断/分支
          memmove(__dest,__dest + 2, // [自动静态注释] 内存复制、清零或移动
                  (ulong)(uint)((int)(puVar5 + uVar4 * 2) - (int)__dest) & 0xfffffff0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar4 = (ulong)(*(int *)(param_1 + 0x410) - 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar5 = *(undefined8 **)(param_1 + 0x408); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        *(int *)(param_1 + 0x410) = (int)uVar4;
        puVar3 = puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (__dest == puVar5 + uVar4 * 2) goto LAB__text__0052203c; // [自动静态注释] 条件判断/分支
      } // [自动静态注释] 作用域/控制流边界
      __dest = __dest + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar3 = puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (__dest != puVar5 + uVar4 * 2); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
LAB__text__0052203c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if ((puVar3 != (undefined8 *)0x0) && ((int)uVar4 == 0)) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0x410) = 0;
    FUN__text__00400fc0(10); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x408) = 0;
    *(undefined4 *)(param_1 + 0x414) = 0;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


